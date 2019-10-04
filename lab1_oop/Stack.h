#pragma once
class Stack
{
public:
	// ����������� ���������
	Stack(int _type, int _maxSize, const char* name);
	
	// ����������� ���������
	Stack(const Stack & other);
	
	// ���������� ������
	~Stack();
	
	// ������ ��� ��������� �������� �����
	int * stack_arr;

	// ������������ ����� �����
	int MaxSize = 30;
	
	// �������� ����� �����
	int size;

	// ��������� �������� ������ �����
	void push(int element);
	
	// ���� �������� �� �����
	void print() const;
	
	// �������� ������ �������
	int getTop() const;

	// �������� ����� �����
	bool isEmpty() const;
	bool isFull() const;

private: 
	char* objID;
	char* name;
	int type;

};

