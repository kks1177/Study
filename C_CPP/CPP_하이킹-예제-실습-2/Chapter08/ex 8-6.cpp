// ex 8-6.cpp
// 구조체 변수와 포인터의 관계 알아보기

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
namecard structInput();

/* 메인 함수 */
int main()
{
	namecard x = { "전수빈", "치과의사", "356-1234", "efwa@anaefn.com" };
	namecard y = { "전원지", "디자이너", "325-2524", "wegmewk@com" };
	namecard* p;

	p = &x;
	cout << "이름 \t 직업 \t\t 연락처 \t 이메일";
	cout << "\n ==========================================";
	cout << "\n " << (*p).name << "\t" << (*p).job << "\t" << (*p).tel << "\t" << (*p).email;

	p = &y;
	cout << "\n" << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email;
	cout << "\n ==========================================";

	cout << "\n sizeof(x) => " << sizeof(x);
	cout << "\n sizeof(p) => " << sizeof(p) << endl;
}

/* 함수 정의부 */

