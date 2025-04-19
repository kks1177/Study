// p 1-71.cpp	함수 포인터(1)
// 같은 형의 매개변수와 반환값을 갖는 Add, Display 함수를 선언하고 포인터를 이용하여 함수를 실행하는 프로그램

#include <iostream>
using namespace std;

void Add(int a, int b);
void Display(int a, int b);

int main(void)
{
	int num1 = 10, num2 = 20;
	void (*fct)(int, int);		// int형 매개변수 2개를 갖고 반환값이 없는 함수 포인터 선언

	fct = Add;
	fct(num1, num2);

	fct = Display;
	fct(num1, num2);

	return 0;
}

void Add(int a, int b) {
	cout << "sum = " << a + b << endl;
}
void Display(int a, int b) {
	cout << "a = " << a << ", b = " << b << endl;
}