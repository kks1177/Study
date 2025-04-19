// 예제 14-1.cpp
// 예외가 발생할 여지가 있는 프로그램 작성하기 

#include <iostream>
using namespace std;

void main()
{
	int a, b, c, d;

	cout << "나눗셈을 하기 위해서 데이터를 입력하시오." << endl;
	cout << "나누는 수(피제수)를 입력하시오 => ";
	cin >> a;
	cout << "나누는 수(제수)를 입력하시오 => ";
	cin >> b;

	c = a / b;
	cout << "몫은 -> " << c << endl;

	d = a % b;
	cout << "나머지 -> " << d << endl;
}
