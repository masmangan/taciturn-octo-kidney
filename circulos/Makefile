
CXX = g++
CXXFLAGS = -g -Wall

FONTES = Figura.cpp Circulo.cpp \
	 ListaDeFigurasPolim.cpp Renderer.cpp GL.cpp \
	 main.cpp
OBJETOS = $(FONTES:.cpp=.o)

main: $(OBJETOS)
## http://stackoverflow.com/questions/18550265/compiling-a-c-program-that-uses-opengl-in-mac-os-x
	$(CXX) $(OBJETOS) -o main -lGL -lGLU -lglut
##	$(CXX) -framework OpenGL -framework GLUT $(OBJETOS) -o main 
	
clean:
	-@ rm -f $(OBJETOS)

depend:
	makedepend -- ${CFLAGS} -- ${FONTES} 

# DO NOT DELETE

Figura.o: Figura.h
Circulo.o: Circulo.h Figura.h
ListaDeFigurasPolim.o: ListaDeFigurasPolim.h Figura.h Circulo.h
Renderer.o: Renderer.h GL.h ListaDeFigurasPolim.h Figura.h Circulo.h
GL.o: GL.h Renderer.h
main.o: ListaDeFigurasPolim.h Figura.h Circulo.h Renderer.h GL.h
