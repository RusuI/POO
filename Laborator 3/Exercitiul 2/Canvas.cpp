#include "Canvas.h"
#include <stdio.h>
#include <iostream>


Canvas::Canvas(int width, int heigth) {
	this->width = width;
	this->heigth = heigth;
	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			this->matrix[i][j] =' ';
		}
	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int x0 = 0, y0 = ray;
	int d = 3 - (2 * ray);

	while (x0 <= y0)
	{

		this->matrix[x0 + x][y0 + y] = ch;
		this->matrix[x0 + x][y - y0] = ch;
		this->matrix[x - x0][y0 + y] = ch;
		this->matrix[x - x0][y - y0] = ch;
		this->matrix[x + y0][y + x0] = ch;
		this->matrix[x + y0][y - x0] = ch;
		this->matrix[x - y0][y + x0] = ch;
		this->matrix[x - y0][y - x0] = ch;
		if (d < 0)
			d += (4 * x0) + 6;
		else {
			d += (4 * (x0 - y0)) + 10;
			y0--;
		}

		x0++;
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	int x0 = 0, y0 = ray;
	int d = 3 - (2 * ray);

	while (x0 <= y0)
	{

		this->matrix[x0 + x][y0 + y] = ch;
		this->matrix[x0 + x][y - y0] = ch;
		this->matrix[x - x0][y0 + y] = ch;
		this->matrix[x - x0][y - y0] = ch;
		this->matrix[x + y0][y + x0] = ch;
		this->matrix[x + y0][y - x0] = ch;
		this->matrix[x - y0][y + x0] = ch;
		this->matrix[x - y0][y - x0] = ch;
		if (d < 0)
			d += (4 * x0) + 6;
		else {
			d += (4 * (x0 - y0)) + 10;
			y0--;
		}

		x0++;
	}
	for (int i = 0; i < this->heigth; i++) {
		for (int j = 0; j < this->width; j++) {
			if (this->matrix[i][j] == ch) {
				j++;
				while (this->matrix[i][j] != ch || this->matrix[i][j - 2] != ch) {
					this->matrix[i][j] = ch;
					j++;
				}
				j = 0;
				i++;
			}
		}
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int j = left; j <= right; j++)
	{
		this->matrix[top][j] = ch;
		this->matrix[bottom][j] = ch;
	}
	for (int i = top; i <= bottom; i++)
	{
		this->matrix[i][right] = ch;
		this->matrix[i][left] = ch;
		
	}
	
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top + 1; i < bottom; i++)
		for (int j = left +1; j < right; j++)
			this->matrix[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	this->matrix[x][y] =ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx, dy, p, x, y;

	dx = x2 - x1;
	dy = y2 - y1;

	x = x1;
	y = y1;

	p = 2 * dy - dx;

	while (x < x2)
	{
		if (p >= 0)
		{
			this->matrix[x][y] = ch;
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			this->matrix[x][y] = ch;
			p = p + 2 * dy;
		}
		x = x + 1;
	}
}


void Canvas::Print()
{
	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout<<this->matrix[i][j];
		}
		std::cout << '\n';
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			this->matrix[i][j] = ' ';
		}
	}
}