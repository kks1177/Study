// ex 8-4.cpp
// 값에 의한 전달 방식 (Call by Value)

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
void structPrn(namecard temp);		// 함수의 선언

/* 메인 함수*/
int main()
{
	namecard x = { "김주현", "MCSE 전문강사", "418-9876", "freentour@naver.com" },
		y = { "박혜경", "웹마스터", "551-6986", "hk@naver.com" },
		z = { "김동식", "기획A팀대리", "318-3961", "ds@naver.com" };

	cout << " 이름 \t 직업 \t\t 연락처 \t 이메일";
	cout << "\n =======================================================";

	structPrn(x);		// 함수 호출
	structPrn(y);
	structPrn(z);
	cout << "\n =======================================================";
}

/* 함수 정의부 */
void structPrn(namecard temp) {
	cout << "\n " << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
}
