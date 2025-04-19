// ex 8-3.cpp
// 구조체 단위로 값 복사하기

#include <iostream>
using namespace std;

/* 구조체 선언부 */
struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

/* 함수 선언부*/

/* 메인 함수 */
int main()
{
	namecard x = { "김주현", "MCSE 전문강사", "418-9876", "freentour@naver.com" },
		y;

	y = x;

	cout << "\t\t 이름 \t 직업 \t\t 연락처 \t 이메일";
	cout << "\n\t\t =====================================";
	cout << "\n <구조체 변수 x >";
	cout << "\t" << x.name << "\t " << x.job << "\t " << x.tel << "\t " << x.email;
	cout << "\n <구조체 변수 y >";
	cout << "\t" << y.name << "\t " << y.job << "\t " << y.tel << "\t " << y.email << endl;;
}

/* 함수 정의부 */