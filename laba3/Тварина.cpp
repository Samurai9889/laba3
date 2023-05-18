#include <iostream>
#include "Тварина.h"
using namespace std;

const int MS = 5;
Animal** arr = new Animal * [MS];
int Animal ::count = -1;

Animal::Animal() {
	cout << "constructor called" << endl;
	++count;
}
void Animal::print() {
	for (int i = 0; i <= Animal::count; i++)
		if (arr[i] != nullptr)arr[i]->Show();
}

void Animal::add() {
	::arr[count] = this;
}

Animal::~Animal() {
	cout << "destructor called" << endl;
}
