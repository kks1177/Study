// 예제 5-1.cpp
// 변수의 주소값 출력하기

#include <iostream>
using namespace std;

void main()
{
	int a = 10;

	cout << " 변수 a에 저장된 값 => " << a << "\n";
	cout << " 변수 a의 주소 => " << &a << "\n";
	cout << " 변수 a에 저장된 값 => " << *&a << "\n";
}
