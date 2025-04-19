// 예제 14-2.cpp
// 조건문을 이용한 예외처리

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

	if (b == 0) {
		cout << "예외 상황이 발생했습니다." << endl;
	}
	else {
		c = a / b;
		cout << "몫은 -> " << c << endl;

		d = a % b;
		cout << "나머지 -> " << d << endl;
	}
}
