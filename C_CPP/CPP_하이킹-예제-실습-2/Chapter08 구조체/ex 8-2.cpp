// ex 8-2.cpp
// 구조체 초기화하기

#include <iostream>
using namespace std;

/* 구조체 선언부 */
struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

/* 함수 선언부 */

/* 메인 함수*/
int main()
{
	namecard x = { "김주현", "MCSE 전문강사", "418-9876", "freentour@naver.com" },
		y = { "박혜경", "웹마스터", "551-6986", "hk@naver.com" },
		z = { "김동식", "기획 A팀 대리", "318-3961", "ds@naver.com" };

	cout << "이름 \t 직업 \t\t 연락처 \t 이메일";
	cout << "\n =========================================";
	cout << "\n" << x.name << "\t" << x.job << "\t" << x.tel << "\t" << x.email;
	cout << "\n" << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email;
	cout << "\n" << z.name << "\t" << z.job << "\t" << z.tel << "\t" << z.email;
	cout << "\n =========================================";
}


/* 함수 정의부 */
