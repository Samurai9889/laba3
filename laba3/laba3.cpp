#include <iostream>
#include <string>
#include "Парнокопитні.h"
#include "Птах.h"
#include "Ссавці.h"
#include "Тварина.h"

using namespace std;

int main()
{
	Animal* ptr;

	Mammals A;
	ptr = &A;
	ptr->add();

	Evenungulates B;
	ptr = &B;
	ptr->add();

	Bird C;
	ptr = &C;
	ptr->add();

	Animal::print();
};