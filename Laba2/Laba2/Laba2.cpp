#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>


double arctg_expression(double m, double t) {
	return atan(5 * pow(m, 2)*t + 7 * m*pow(t, 2));
}

double arcsin_expression(double m, double t) {
	return asin(5 * pow(m, 2) * t + 7 * m * pow(t, 2));
}

int main()
{
	double m, t;
    std::cout << "Input m,t \n";
	std::cin >> m >> t;
	std::cout << "M: " << m << " \n";
	std::cout << "T: " << t << " \n";
	double expression = (pow(m, 2) + pow(t, 2));
	if (expression > 0.5){
		std::cout << "Rezult (expression > 0.5): " << arctg_expression(m, t) << " \n";
	}
	else if ((0.1 < expression) && (expression > 0.5)){
		std::cout << "Rezult (0.1 < expression < 0.5): " << arcsin_expression(m, t) << " \n";
	}
	else if (expression < 0.1){
		std::cout << "there are no conditions for expression";
	}
}
