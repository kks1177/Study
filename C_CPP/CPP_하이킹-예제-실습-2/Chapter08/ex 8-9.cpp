// ex 8-9.cpp
// 구조체 배열 사용하기

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

/* 메인함수 */
int main()
{
	namecard x[3] = { { "김주현", "MCSE 전문강사", "418-9876", "freentour@naver.com" },
		{ "박혜경", "웹마스터", "551-6986", "hk@naver.com" },
		{ "김동식", "기획A팀대리", "318-3961", "ds@naver.com" } };

	cout << " 이름 \t 직업 \t\t 연락처 \t 이메일 \n";
	cout << " ================================================ \n";

	for (int i = 0; i < 3; i++) {
		cout << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email << endl;
	}
	cout << " ================================================ \n";
}

/* 함수 정의부 */

