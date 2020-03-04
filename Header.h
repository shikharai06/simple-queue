#include<iostream>
using namespace std;
class Queue {
	int rear, front, size;
	int* arr;
public:
	Queue(int = 5);
	bool insert(int data);
	bool remove();
	bool IsFull();
	bool IsEmpty();
	void display();
};