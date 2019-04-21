// BaseClass1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "Shape.h"
#include <iostream>

int main () {
	float width1, length1, rad, line;


	Circle C;
	std::cout << "Input Radius: ";;
	std::cin >> rad;
	C.getRadius (rad);
	std::cout << "Area of circle: " << C.CircleArea (rad) << std::endl;

	Rectangle R;
	std::cout << "Input Length and Width: ";
	std::cin >> length1 >> width1;
	R.getLW (width1, length1);
	std::cout << "Area of rectangle: " << R.RectangleArea (length1, width1) << std::endl;

	Square S;
	std::cout << "Input Length:";
	std::cin >> line;
	S.getA (line);
	std::cout << "Area of Square:  " << S.SquareArea (line) << std::endl;

	return 0;
}

