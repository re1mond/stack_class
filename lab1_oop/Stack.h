#pragma once
class Stack
{
public:
	// Конструктор створення
	Stack(int _type, int _maxSize, const char* name);
	
	// Конструктор копіювання
	Stack(const Stack & other);
	
	// Деструктор классу
	~Stack();
	
	// Массив для зберігання елементів стеку
	int * stack_arr;

	// Максимальний розмір стеку
	int MaxSize = 30;
	
	// Поточний розмір стеку
	int size;

	// Додавання елементу наверх стеку
	void push(int element);
	
	// Вивід елементів на екран
	void print() const;
	
	// Отримати верхній елемент
	int getTop() const;

	// Перевірка стану стеку
	bool isEmpty() const;
	bool isFull() const;

private: 
	char* objID;
	char* name;
	int type;

};

