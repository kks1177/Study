// 예제 8-5.cpp
// 구조체 단위의 입력 함수 작성하기

#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void structPrn(namecard temp);
namecard structInput();			// 입력을 담당하는 함수의 선언

void main()
{
	namecard x, y, z;

	x = structInput();
	y = structInput();
	z = structInput();

	cout << "\n 이름   직업     연락처     이메일 ";
	cout << "\n ===============================================";
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "\n ===============================================";
}

void structPrn(namecard temp) {
	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << " \t" << temp.email;
}

namecard structInput() {	// 입력을 담당하는 함수의 정의
	namecard temp;
	
	cout << "\n 이름을 입력하세요 => ";
	cin >> temp.name;
	cout << "\n 직업을 입력하세요 => ";
	cin >> temp.job;
	cout << "\n 연락처을 입력하세요 => ";
	cin >> temp.tel;
	cout << "\n 이메일을 입력하세요 => ";
	cin >> temp.email;

	return temp;
}

