#include"Header.h"
int main() {
	Queue q1;
	q1.insert(45);
	q1.insert(12);
	q1.insert(45);
	q1.insert(33);
	q1.insert(43);
	q1.display();
	q1.remove();
	q1.display();
	q1.remove();
	q1.display();
}