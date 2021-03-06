#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>

double degree_of_ln(double x) {
	return sqrt(labs(x)) * (-1);
}

double left_expression(double x, double y) {
	return log(pow(y, degree_of_ln(x)));
}

double middle_expression(double x, double y) {
	return x - (y/2);
}

double right_expression(double z) {
	return pow(sin(atan(z)), 2);
}

int main()
{
	double x, y, z;
    std::cout << "Input x,y,z \n";
	std::cin >> x >> y >> z;
	std::cout << "\n x: " << x << "\n y: " << y << "\n z: " << z;
	double rezult = left_expression(x, y) * middle_expression(x, y) + right_expression(z);
	std::cout << "\n Rezult: " << rezult;
}