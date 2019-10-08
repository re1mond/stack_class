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
	
	// ���������� ��������� =
	void operator=(const Stack & other);

	// ���������� �������� ==
	bool operator==(const Stack & other);

	// ���������� �������� !=
	bool operator!=(const Stack & other);

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

