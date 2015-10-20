#ifndef RENDERER_H
#define RENDERER_H

class ListaDeFigurasPolim;

class Renderer {
	public:
		Renderer(ListaDeFigurasPolim* lista);
		virtual void paint();
		virtual void keyboard(unsigned char key, int x, int y);
	protected:
		ListaDeFigurasPolim* lista;
};

#endif
