// p 1-21.cpp	구조체(3)
// 중첩 구조체를 선언하고 한꺼번에 초기화하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	typedef struct {
		int day;
		int month;
		int year;
	} Date;
	typedef struct {
		char name[20];
		char phoneno[20];
		Date birthday;
	} Person;

	Person p1 = { "Hong, Gil-Dong", "02-111-1234", {1,1,2000} };

	cout << "이름 : " << p1.name << endl;
	cout << "전화 : " << p1.phoneno << endl;
	cout << "생일 : " << p1.birthday.year << "년 "
		<< p1.birthday.month << "월 "
		<< p1.birthday.day << "일 " << endl;

	return 0;
}