// ex 7-10.cpp
// 함수의 포인터를 사용해서 상황에 따른 서로 다른 함수 호출하기

#include <iostream>
using namespace std;

/* 함수 선언부 */
void oneF();
void twoF();
void threeF();

/* 함수 포인터 선언 */
void (*pf)(void);

/** 메인 함수 **/
void main()
{
	int num;

	while (1) {
		cout << "0부터 3사이의 숫자를 입력하되 끝내려면 0 입력 => ";
		cin >> num;

		switch (num) {
		case 0:
			cout << "종료" << endl;
			return;
		case 1:
			pf = oneF;
			break;
		case 2:
			pf = twoF;
			break;
		case 3:
			pf = threeF;
			break;
		}
		pf();
	}
}


/* 함수 정의부 */
void oneF() {
	cout << "one" << endl;
}
void twoF() {
	cout << "two" << endl;
}
void threeF() {
	cout << "three" << endl;
}
