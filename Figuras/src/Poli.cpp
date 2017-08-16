#include "Application.h"
#include "iostream"
#include <vector>

#define PI 3.1416

std::vector<Vector> vertices;


void Application::seTup()
{
	int lados =0, angulo = 0, radio = 50;
	std::cin >> lados;
	int incremento = 360 / lados;
	Vector mv;
	moveTo(100,100);
	mv.x = x0;
	mv.y = y0;

	

	for (int i =0; i< lados;++i)
	{
		mv.x += radio * cos(angulo * PI / 180);
		mv.y += radio * sin(angulo * PI / 180);
		vertices.push_back(mv);
		angulo += incremento;
	}

}

void Application::draw()
{
	

	for (int i= vertices.size();i--;)
	{
		lineTo(vertices[i].x, vertices[i].y);
		moveTo(vertices[i].x, vertices[i].y);
	}
	
	
}

void Application::update()
{

}