#include"Header.h"
using namespace std;
Queue::Queue(int size) {
	this->front = -1;
	this->rear = -1;
	this->size = size;
	this->arr = new int[size];
}

bool Queue::IsFull() {
	if( (rear == size - 1)||(front>rear)) {
		return true;
	}

	return false;
}
bool Queue::IsEmpty() {

	if (front == -1 && rear == -1) {
		return true;
	}
	return false;

}
bool Queue::insert(int data) {
	if (IsFull()) {
		return false;
	}
	if (front == -1 && rear == -1) {

		front++;
	}
	this->arr[++rear] = data;
	return true;

}
bool Queue::remove() {
	if (IsEmpty()) {
		return false;
	}
	arr[--front] = 0;
	return true;
}
void Queue::display() {
	for (int i = front; i <= rear; i++) {
		cout << arr[i] << " " << endl;
	}

}