#include "pch.h"
#include <iostream>
#include "Stack.h"
#include <locale>
#include <ctime>



int main()
{
	setlocale(LC_ALL, "rus");
	// Створення двох екземплярів классу Stack
	Stack a(1, 30, "Vagon_type");
	Stack b(0, 30, "Vagon_type");
	Stack q(0, 20, "Vagon_type");

	std::cout << "\n";
	
	// Заповнення стеку випадковими значеннями
	for (int i = 0; i < 15; i++)
	{
		if (rand() % 2 == 0) {
			a.push(i);
		}
		else {
			b.push(i);
		}
	}


	a = b;

	std::cout << "Викликаємо оператор == ";
	bool result = a == b;
	std::cout << std::boolalpha << result <<"\n";

	std::cout << "Викликаємо оператор != ";
	bool result_v = a != b;
	std::cout << std::boolalpha << result_v << "\n";


	std::cout << "\n";	
	// Вивід створених стеків
	std::cout << "a: ";
	a.print();

	std::cout << "\n";
	std::cout << "b: ";
	b.print();



	std::cout << "\n";
	srand(time(0));
	return 0;
}


