// p 1-19.cpp	구조체(1)
// 이름과 전화번호를 가지는 구조체를 선언하고 멤버로 접근하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	struct phone {		// phone 이라는 이름(태그)의 구조체 선언
		char name[20];		// 첫번째 구조체 멤버
		char phoneno[20];	// 두번째 구조체 멤버
	};
	struct phone myphone;

	strcpy_s(myphone.name, "Hong, Gil-Dong");
	strcpy_s(myphone.phoneno, "02-111-1234");

	cout << myphone.name << endl;
	cout << myphone.phoneno << endl;

	return 0;
}