#include "ListaDeFigurasPolim.h"
#include "Renderer.h"
#include "GL.h"
#include "Circulo.h"

using namespace std;

int main() {
    ListaDeFigurasPolim lista;

    lista.add(new Circulo(-4, -5, 4.5));
    lista.add(new Circulo(5, 5, 3));
    lista.add(new Circulo(5, -5, 2.5));

    Renderer renderer(&lista);

    GL::init("Desenho de figuras", &renderer);

    GL::loop();
}

