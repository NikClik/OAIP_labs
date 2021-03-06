#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>


void print_massiv(int ** massiv, int n, int m) {
	int i, j;
	std::cout << "Massiv";
	for (i = 0; i < n; i++) {
		std::cout << "\n";
		for (j = 0; j < m; j++) {
			std::cout << massiv[i][j] << "  ";
		}
		std::cout << "\n";
	}
}

void find_max(int ** massiv, int n, int m) {
	int i, j;
	int max_index_n = 0;
	int max_index_m = 0;
	int max_value = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			massiv[i][j] > max_value ? max_value = massiv[i][j], max_index_n = i, max_index_m = j: NAN;
		}
	}
	int last_element = massiv[n-1][m-1];
	massiv[n-1][m-1] = max_value;
	massiv[max_index_n][max_index_m] = last_element;
	print_massiv(massiv, n, m);
}

void create_massiv() {
	int **massiv, i, j, n, m;
	std::cout << "Input lenght of massiv N \n";
	std::cin >> n ;
	std::cout << "Input lenght of massiv M \n";
	std::cin >> m ;
	massiv = new int*[n];
	for (i = 0; i < n; i++)
		massiv[i] = new int[m];
	std::cout << "\n Input A";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			std::cout << "\n a[" << i + 1 << "] [" << j + 1 << "] = ";
			std::cin >> massiv[i][j];
		}
	}
	print_massiv(massiv, n, m);
	find_max(massiv, n, m);
}

int main()
{
	create_massiv();
}

