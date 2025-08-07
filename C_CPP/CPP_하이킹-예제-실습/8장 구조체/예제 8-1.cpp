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
	struct namecard man;

	cout << " 이름 입력 => ";
	cin >> man.name;
	cout << " 직업 입력 => ";
	cin >> man.job;
	cout << " 연락처 입력 => ";
	cin >> man.tel;
	cout << " 이메일 입력 => ";
	cin >> man.email;

	cout << "\n 입력받은 데이터를 출력합니다.";
	cout << "\n 이름 \t 직업 \t 연락처 \t 이메일 ";
	cout << "\n =======================================";
	cout << "\n " << man.name << "\t " << man.job << "\t " << man.tel << "\t " << man.email;
	cout << "\n =======================================";
	cout << "\n sizeof(namecard) => " << sizeof(namecard);
	cout << "\n 구조체 변수의 메모리 사이즈 => " << sizeof(namecard) << endl;
}
