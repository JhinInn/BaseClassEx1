#pragma once
#ifndef _Shape_
#define _Shape_
constexpr auto PI = 3.14;

#include<iostream>
#include<string>

class Shape {
private:
	double length;
public:
	double RectangleArea (double a, double b) {
		return a * b;
	};
	double CircleArea (double r) {
		return PI * r* r;
	};
	double SquareArea (double a) {
		return a * a;
	}
	Shape ();
	~Shape ();
};

class Rectangle :public Shape {
private:
	double width;
	double length;
public:
	Rectangle ();
	~Rectangle ();
	void getLW (double width1, double length1) {
		length = length1;
		width = width1;
	}
};

class Circle :public Shape {
private:
	double radius;
public:
	Circle ();
	~Circle ();
	void getRadius (double r) {
		radius = r;
	}
};

class Square : public Rectangle {
private:
	double a;
public:
	Square ();
	~Square ();
	void getA (double b) {
		a = b;
	}
};
#endif 