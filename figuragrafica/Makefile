# Opções do compilador
CXX = g++
CXXFLAGS = -g -Wall

FONTES = Figura.cpp Quadrado.cpp Circulo.cpp \
	 ListaDeFigurasPolim.cpp Renderer.cpp GL.cpp \
	 main.cpp
OBJETOS = $(FONTES:.cpp=.o)

main: $(OBJETOS)
	$(CXX) $(OBJETOS) -o main -lGL -lGLU -lglut

clean:
	-@ rm -f $(OBJETOS)

depend:
	makedepend -- ${CFLAGS} -- ${FONTES} 

# DO NOT DELETE

Figura.o: Figura.h
Quadrado.o: Quadrado.h Figura.h
Circulo.o: Circulo.h Figura.h
ListaDeFigurasPolim.o: ListaDeFigurasPolim.h Quadrado.h Figura.h Circulo.h
Renderer.o: Renderer.h GL.h ListaDeFigurasPolim.h Quadrado.h Figura.h Circulo.h
GL.o: GL.h Renderer.h
main.o: ListaDeFigurasPolim.h Quadrado.h Figura.h Circulo.h Renderer.h GL.h
