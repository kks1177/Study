// 예제 7-10.cpp
// 함수 포인터를 사용해서 상황에 따른 서로 다른 함수 호출하기

#include <iostream>
using namespace std;

// 함수를 가리키는 포인터 변수 선언
void (*pf)(void);

void one();
void two();
void three();

void main()
{
	int num;
	while (1) {
		cout << "0부터 3사이의 숫자를 입력하되 끝내려면 0 입력 => ";
		cin >> num;
		switch (num) {
		case 0:
			cout << "   종료 \n";
			return;
		case 1:
			pf = one;
			break;
		case 2:
			pf = two;
			break;
		case 3:
			pf = three;
			break;
		}
		pf();
	}
}

void one() {
	cout << "   one \n";
}
void two() {
	cout << "   two \n";
}
void three() {
	cout << "   three \n";
}