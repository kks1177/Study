// ex 8-8.cpp
// 구조체 참조 매개변수로 사용하는 함수 작성하기

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
void structPrn(namecard temp);
namecard structInput(namecard &temp);

/* 메인 함수 */
int main()
{
	namecard x, y, z;

	structInput(x);
	structInput(y);
	structInput(z);

	cout << " 이름 \t 직업 \t\t 연락처 \t 이메일";
	cout << "\n ======================================== ";
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "\n ======================================== ";
}

/* 함수 정의부 */
void structPrn(namecard temp) {
	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
}
namecard structInput(namecard &temp) {
	cout << "\n 이름 입력 => ";
	cin >> temp.name;

	cout << "직업 입력 => ";
	cin >> temp.job;

	cout << "연락처 입력 => ";
	cin >> temp.tel;

	cout << "이메일 입력 => ";
	cin >> temp.email;
	
	return temp;
}
