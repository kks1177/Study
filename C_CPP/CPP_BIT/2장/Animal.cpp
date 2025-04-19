// Animal.cpp

#include "Animal.h"

Animal::Animal(void) {
	cout << "Animal 持失切" << endl;
	head = new Head();
}
Animal::~Animal(void) {
	delete head;
	cout << "Animal 社瑚切" << endl;
}