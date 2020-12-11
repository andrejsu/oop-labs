#include <iostream>
#include <fstream>
#include <cmath>

class IOException {};

double celsiusToFahrenheit(const int celsius) {
	return 1.8 * celsius + 32;
}

int main() {
	std::cout.width(13);
	std::cout.fill('/');
	std::cout.precision(4);
	
	int celsius;

	std::cout << "Celcius: ";
	std::cin >> celsius;
	
	std::ofstream fout("out.txt", std::ios::out);
	try {

		if (!fout.is_open()) {
			throw IOException();
		}

		int fahrenheit = celsiusToFahrenheit(celsius);
		
		fout << fahrenheit;
		std::cout << "Fahrenheit: " << fahrenheit << std::endl;
		
		fout.close();
	}
	catch (IOException) {
		std::cout << "The file cannot be opened!" << std::endl;
	}
	
	// 2 Задание
	// ====================================
	
	double x, y;

	std::cout << "Enter x: ";
	
	try {
		std::cin >> x;
		
		if (!std::cin) throw '1';
		if (x < -0.33 || x > -0.12) throw 1;

		y = 10 * asin(10 * x + 2.2);
		
		std::cout << "y = 10arcsin(10x + 2.2)" << std::endl;
		std::cout << y;
	}
	catch (char) {
		std::cout << "Input error!";
	}
	catch (int) {
		std::cout << "X does not fit in the range of acceptable values!";
	}
	
	return 0;
}