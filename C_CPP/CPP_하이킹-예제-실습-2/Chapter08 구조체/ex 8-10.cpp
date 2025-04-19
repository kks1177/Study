// ex 8-10.cpp
// 공용체 분석하기

#include <iostream>
using namespace std;

/* 공용체 선언부 */
union u_data {
	char ch;		// 문자형 데이터 멤버
	int num;		// 정수형 데이터 멤버
};

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	u_data test;		// 공용체 변수 선언

	// 공용체의 크기 출력
	cout << " sizeof(u_data)\t : " << sizeof(u_data) << " byte \n";
	// 공용체 변수의 주소
	cout << " &test  \t : " << (int)&test << endl;
	// 공용체 멤버의 주소
	cout << " &test.ch  \t : " << (int)&test.ch << endl;
	cout << " &test.num \t : " << (int)&test.num << endl;
}

/* 함수 정의부 */
