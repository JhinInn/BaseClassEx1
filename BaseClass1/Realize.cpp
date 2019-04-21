#include "pch.h"
#include "Shape.h"
#include <iostream>

Shape::Shape ()
{
	std::cout << "Shape Constructed!" << std::endl;
}

Shape::~Shape () {
	std::cout << "Shape Destructed!" << std::endl;
}

Rectangle::Rectangle () {
	std::cout << "Rectangle Constructed!" << std::endl;
}

Rectangle::~Rectangle () {
	std::cout << "Rectangle Destructed!" << std::endl;
}

Circle::Circle () {
	std::cout << "Circle Constructed!" << std::endl;
}

Circle::~Circle () {
	std::cout << "Circle Destructed!" << std::endl;
}

Square::Square () {
	std::cout << "Square Constructed!" << std::endl;
}

Square::~Square () {
	std::cout << "Square Destructed!" << std::endl;
}

