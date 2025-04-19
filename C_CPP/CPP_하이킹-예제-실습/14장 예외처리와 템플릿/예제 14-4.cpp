// 예제 14-4.cpp
// 예외 자료형과 catch문의 자료형이 일치하지 않는 경우의 비정상 종료

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

	try {
		if (b == 0) {
			throw b;
		}
		c = a / b;
		cout << "몫은 -> " << c << endl;

		d = a % b;
		cout << "나머지 -> " << d << endl;
	}
	catch (double ex) {
		cout << ex << "로 나누려는 시도가 있었으므로 예외발생" << endl;
	}
	cout << "예외가 발생하더라도 정상 종료된다." << endl;
}
