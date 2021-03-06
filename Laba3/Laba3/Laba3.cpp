#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>


void op_of_elements(int massiv[], int massiv_lenght) {
	int first_zero_element = -1;
	int second_zero_element = -1;
	int i;
		for (i = 0; i < massiv_lenght; i++)
		{
			if (massiv[i] == 0) {
				if (first_zero_element == -1) {
					first_zero_element = i;
				}
				else if (second_zero_element == -1){
					second_zero_element = i;
				}
				else
				{
					break;
				}
			}
		}
		int sum = 0;
		for (i = first_zero_element; i < second_zero_element; i++)
		{
			sum += massiv[i];
		}
		std::cout<< "\n Summ = " << sum;
}

void print_massiv(int massiv[], int massiv_lenght) {
	int i;
	std::cout << "Massiv: \n";
	for (i = 0; i < massiv_lenght; i++)
	{
		std::cout << " [" << massiv[i] << "] ";
	}
}

void create_massiv() {
	std::cout << "Input lenght of massiv \n";
	int massiv_lenght, i;
	std::cin >> massiv_lenght;
	int massiv[20];
	for (i = 0; i < massiv_lenght; i++)
	{
		std::cout << "Input element [" << i << "] \n";
		std::cin >> massiv[i];
	}
	print_massiv(massiv, massiv_lenght);
	op_of_elements(massiv, massiv_lenght);
}

int main()
{
	create_massiv();
}

