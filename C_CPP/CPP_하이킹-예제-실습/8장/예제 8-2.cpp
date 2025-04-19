// 예제 8-2.cpp
// 구조체 초기화하기

// 예제 8-1.cpp
// 구조체를 정의하고 사용하기

#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void main()
{
	namecard x = { "김주현", "MCSE전문강사", "418-9876", "freentour@naver.com" };
	namecard y = { "박혜경", "웹마스터", "551-6986", "hk@naver.com" };
	namecard z = { "김동식", "기획A팀대리", "318-3961", "ds@naver.com" };

	cout << "\n 이름 \t 직업 \t\t 연락처 \t   이메일 ";
	cout << "\n ===================================================";
	cout << "\n " << x.name << "\t" << x.job << "\t" << x.tel << "\t" << x.email;
	cout << "\n " << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email;
	cout << "\n " << z.name << "\t" << z.job << "\t" << z.tel << "\t" << z.email;
	cout << "\n ===================================================";
}

