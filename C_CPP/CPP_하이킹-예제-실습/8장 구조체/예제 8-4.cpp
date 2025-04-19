// 예제 8-4.cpp
// 값에 의한 전달 방식으로 구조체를 매개변수로 사용하는 함수

#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void structPrn(namecard temp);		// 함수의 선언

void main()
{
	namecard x = { "김주현", "MCSE전문강사", "418-9876", "freentour@naver.com" },
			 y = { "박혜경", "웹마스터", "551-6986", "hk@naver.com" },
			 z = { "김동식", "기획A팀대리", "318-3961", "ds@naver.com" };

	cout << "  이름 \t 직업 \t\t 연락처 \t   이메일 ";
	cout << "\n ===================================================";
	structPrn(x);		// 함수의 호출
	structPrn(y);
	structPrn(z);
	cout << "\n ===================================================";
}

void structPrn(namecard temp) {			// 함수의 정의
	cout << "\n " << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
}
