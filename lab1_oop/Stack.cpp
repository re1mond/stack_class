#include "pch.h"
#include "Stack.h"
#include <math.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

// Конструктор
Stack::Stack(int _type, int _maxSize,  const char* name)
{
	MaxSize = _maxSize;
	stack_arr = new int[MaxSize];
	type = _type;
	size = -1;
	cout << "Стек " << this <<" "<< type << " розмiром: " << MaxSize <<" створено. \n";
}

// Конструктор копіювання
Stack::Stack(const Stack & other) {
	MaxSize = other.MaxSize;
	type = other.type;
	stack_arr = new int [other.MaxSize];
	size = other.size;
	
	for (int i = 0; i < other.size + 1; i++) {
		stack_arr[i] = other.stack_arr[i];
	}

	cout << "Конструктор копiювання скопiював класс з " << &other << " у " << this << endl;
}

// Додавання елементу в вершину стеку
void Stack::push(int element)  {
	size = size + 1;
	if (size < MaxSize) {
		stack_arr[size] = element;
	}
	else {
		cout << "Стек " << this << " заповнений!\n";
	}
}

// Отримати верхній елемент стеку
int Stack::getTop() const {
	return stack_arr[size];
}

// Перевірка: чи пустий стек
bool Stack::isEmpty() const {
	if (size <= 0) {
		return true;
	}
	else {
		return false;
	}
}

// Перевірка: чи стек заповнений
bool Stack::isFull() const {
	if (size == MaxSize) {
		return true;
	}
	else {
		return false;
	}
}

// Вивід значень на екран
void Stack::print() const {
	for (int i = size; i > -1; i--) {
		cout << stack_arr[i] << "\t";
	}
}

// Декструктор 
Stack::~Stack()
{
	delete[] stack_arr;
	cout << "\nДеструктор усiшно виконав видалення класса - " << this;
}



