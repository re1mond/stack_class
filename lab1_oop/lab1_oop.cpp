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

	// Копіювання екземпляра класу а в класс с та d
	Stack c(a);
	Stack d(a);
	Stack p(b);
	// Додавання в вершину класу значення

	std::cout << "\n";
	
	// Вивід створених стеків
	std::cout << "a: ";
	a.print();

	std::cout << "\n";
	std::cout << "b: ";
	b.print();

	std::cout << "\n";
	std::cout << "c: ";
	c.print();

	std::cout << "\n";
	std::cout << "d: ";
	d.print();

	std::cout << "\n";
	std::cout << "p: ";
	p.print();

	std::cout << "\n";
	srand(time(0));
	return 0;
}


