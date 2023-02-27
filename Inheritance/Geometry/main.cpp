#include<iostream>
using namespace std;

enum Color
{
	console_blue = 0x99,
	console_green = 0xAA,
	console_red = 0xCC,
	console_default = 0x07
};
//enum (Enumeration - Перечисление) - это набор именованных констант типа 'int'

class Shape
{
	Color color;
public:
	Shape(Color color) :color(color) {};
	virtual ~Shape() {}

	virtual double get_area()const = 0;
	virtual double get_perimeter()const = 0;
	virtual void draw()const = 0;
};

void main()
{
	setlocale(LC_ALL, "");

}