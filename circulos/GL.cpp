#include "GL.h"
#include "Renderer.h"

Renderer* GL::renderer=NULL;

using namespace std;

// Usada internamente para desenhar ou pintar um retangulo
void GL::rect(GLenum prim, float x1, float y1, float x2, float y2) {
     glBegin(prim);
	glVertex2f(x1,y1);
	glVertex2f(x2,y1);
	glVertex2f(x2,y2);
	glVertex2f(x1,y2);
     glEnd();
}

// Usada internamente para desenhar ou pintar um triangulo
void GL::tri(GLenum prim, float x1, float y1, float x2, float y2, float x3, float y3) {
     glBegin(prim);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
      glEnd();
}

// Desenha um retangulo
void GL::drawRect(float x1, float y1, float x2, float y2) {
	rect(GL_LINE_LOOP,x1,y1,x2,y2);
}

// Pinta um retangulo
void GL::fillRect(float x1, float y1, float x2, float y2) {
	rect(GL_QUADS,x1,y1,x2,y2);
}

// Desenha um triangulo
void GL::drawTri(float x1, float y1, float x2, float y2, float x3, float y3) {
	tri(GL_LINE_LOOP,x1,y1,x2,y2,x3,y3);
}

// Pinta um triangulo
void GL::fillTri(float x1, float y1, float x2, float y2, float x3, float y3) {
	tri(GL_TRIANGLES,x1,y1,x2,y2,x3,y3);
}

// Pinta um circulo
void GL::drawCirc(float x1, float y1, float r) {

	float ang;
	ang = 0;

	// Usamos line loop
	glBegin(GL_LINE_LOOP);

	GLint circle_points = 40; 
	for (int i = 0; i < circle_points; i++) {
		float angle = 2*3.1415926*i/circle_points; 
		// Vários pontos ao redor do centro
		glVertex2f(x1+cos(angle)*r, y1+sin(angle)*r);
	}
	// Este é para garantir que vai fechar o círculo
	glVertex2f(x1+cos(0)*r, y1+sin(0)*r);
	glEnd();
}

// Pinta um circulo
void GL::fillCirc(float x1, float y1, float r) {

	float ang;
	ang = 0;

	// Usamos triangle fan para ser mais eficiente
	glBegin(GL_TRIANGLE_FAN);
	// Um ponto no centro...
	glVertex2f(x1,y1);

	GLint circle_points = 40; 
	for (int i = 0; i < circle_points; i++) {
		float angle = 2*3.1415926*i/circle_points; 
		// ... e vários pontos ao redor
		glVertex2f(x1+cos(angle)*r, y1+sin(angle)*r);
	}
	// Este é para garantir que vai fechar o círculo
	glVertex2f(x1+cos(0)*r, y1+sin(0)*r);
	glEnd();
}

// Desenha uma linha
void GL::drawLine(float x1, float y1, float x2, float y2) {
	glBegin(GL_LINES);
	  glVertex2f(x1,y1);
	  glVertex2f(x2,y2);
	glEnd();
}

// Limpa a tela e prepara para desenhar
void GL::clear() {
	// Limpa a janela de visualização com a cor branca
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Carrega a matriz identidade
	glLoadIdentity();
}

// Funcao responsavel por inicializar parametros e variaveis
void GL::init(string titulo, Renderer* render)
{
	int argc = 0;
	char *argv[] = { (char *)"gl", 0 };

	glutInit(&argc,argv);

	// Define do modo de operacao da GLUT
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
 
	// Especifica o tamanho inicial em pixels da janela GLUT
	glutInitWindowSize(400,400); 
 
	// Cria a janela passando como argumento o titulo da mesma
	glutCreateWindow(titulo.c_str());
 
	// Registra a funcao callback de redesenho da janela de visualizacao
	glutDisplayFunc(draw);

	// Registra a funcao callback para tratamento das teclas ASCII
	glutKeyboardFunc (keyboard);

	// Registra a funcao callback para tratamento do mouse
	glutMouseFunc (mouse);

	// Registra a função callback para redimensionamento da janela
	glutReshapeFunc (reshape);

	renderer = render;
}

// Entra no loop de eventos
void GL::loop() {
	glutMainLoop();
}

void GL::reshape(int width, int height)
{
	// Calcula relação de aspecto da janela
	float aspect = (float)width/height;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// Estabelece a janela de seleção (esquerda, direita, inferior, 
	// superior) mantendo a proporção com a janela de visualização
	if(aspect < 1) 
		gluOrtho2D (-10.0f, 10.0f, -10.0f/aspect, 10.0f/aspect);
	else 
		gluOrtho2D (-10.0f*aspect, 10.0f*aspect, -10.0f, 10.0f);
	glMatrixMode(GL_MODELVIEW);
	glViewport(0,0,width-1,height-1);
}

// Funcao chamada quando a tela é redesenhada
void GL::draw(void)
{
	clear();
	renderer->paint();
	glutSwapBuffers();
}

void GL::setColor(GLubyte r, GLubyte g, GLubyte b)
{
	glColor3ub(r,g,b);
}

// Funcao chamada quando uma tecla é pressionada
void GL::keyboard(unsigned char key, int x, int y)
{
	if (key == 27)		// ESC ?
		exit(0);

	// Repassa para o objeto Renderer
	renderer->keyboard(key,x,y);

	// Redesenha a tela
	glutPostRedisplay();
}

void GL::mouse(int button, int state, int x, int y)
{

// http://nehe.gamedev.net/article/using_gluunproject/16013/

   GLint viewport[4];
    GLdouble modelview[16];
    GLdouble projection[16];
    GLfloat winX, winY, winZ;
    GLdouble posX, posY, posZ;
 
    glGetDoublev( GL_MODELVIEW_MATRIX, modelview );
    glGetDoublev( GL_PROJECTION_MATRIX, projection );
    glGetIntegerv( GL_VIEWPORT, viewport );
 
    winX = (float)x;
    winY = (float)viewport[3] - (float)y;
    glReadPixels( x, int(winY), 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, &winZ );
 
    gluUnProject( winX, winY, winZ, modelview, projection, viewport, &posX, &posY, &posZ);
 //


	renderer->mouse(button, state, posX, posY);

	// Redesenha a tela
	glutPostRedisplay();
}


