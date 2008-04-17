#include "Window.h"

Window::Window()
{
	
	simulation = new Simulation();
	renderer = new Renderer(simulation);
	simulation->start();
}

void Window::initGui(){
	renderer->update();
	setCentralWidget(renderer);
	resize(200,200);
	show();
}

Window::~Window()
{
}
