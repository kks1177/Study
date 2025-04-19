// 예제 8-7.cpp
// 구조체 포인터를 매개변수로 사용하는 함수 작성하기
// 주소에 의해 전달 방식

#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void structPrn(namecard temp);
void structInput(namecard* pTemp);

void main()
{
	namecard x, y, z;

	structInput(&x);
	structInput(&y);
	structInput(&z);

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

void structInput(namecard* pTemp) {		// call by address, 메모리 한개 차지, 서울에서 부산까지 한번에 감
	cout << "\n 이름을 입력하세요 => ";
	cin >> pTemp->name;
	cout << "\n 직업을 입력하세요 => ";
	cin >> pTemp->job;
	cout << "\n 연락처을 입력하세요 => ";
	cin >> pTemp->tel;
	cout << "\n 이메일을 입력하세요 => ";
	cin >> pTemp->email;
}

/*
void structInput(namecard* pTemp) {		// call by value, 메모리 두개 차지, 서울에서 부산을 갈 때 환승을 한 번 함
	cout << "\n 이름을 입력하세요 => ";
	cin >> pTemp.name;
	cout << "\n 직업을 입력하세요 => ";
	cin >> pTemp.job;
	cout << "\n 연락처을 입력하세요 => ";
	cin >> pTemp.tel;
	cout << "\n 이메일을 입력하세요 => ";
	cin >> pTemp.email;
}
*/