// 예제 8-8.cpp
// 구조체 참조 매개변수로 사용하는 함수 작성하기
// 참조에 의한 전달 방식

#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void structPrn(namecard temp);
void structInput(namecard &temp);

void main()
{
	namecard x, y, z;

	structInput(x);		// 함수의 호출
	structInput(y);
	structInput(z);

	cout << "  이름 \t 직업 \t\t 연락처 \t   이메일 ";
	cout << "\n ===================================================";
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "\n ===================================================";
}

void structPrn(namecard temp) {
	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << " \t" << temp.email;
}

void structInput(namecard& temp) {
	cout << "\n 이름을 입력하세요 => ";
	cin >> temp.name;
	cout << "\n 직업을 입력하세요 => ";
	cin >> temp.job;
	cout << "\n 연락처을 입력하세요 => ";
	cin >> temp.tel;
	cout << "\n 이메일을 입력하세요 => ";
	cin >> temp.email;
}
