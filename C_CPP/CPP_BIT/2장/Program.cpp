// Program.cpp

// 예제 2.1
/*
#include "Stu.h"

int main()
{
	Stu* stu = new Stu(10);
	stu->Study(200);
	delete stu;
	return 0;
}
*/


// 예제 2.3
/*
#include "Stu.h"

int main()
{
	Stu* stu = new Stu();
	stu->Study();
	delete stu;
	return 0;
}
*/


// 예제 2.5
/*
#include "Stu.h"

int main()
{
	Stu* s1 = new Stu(3, "홍길동");
	Stu* s2 = new Stu(1, "강감찬", "애월읍 고내리");
	
	s1->View();
	s2->View();

	delete s2;
	delete s1;

	return 0;
}
*/


// 예제 2.6
/*
#include "Stu.h"

int main()
{
	Stu s1("홍길동");
	Stu s2(s1);
	s2.View();
	return 0;
}
*/


// 예제 2.8

#include <iostream>
#include "Stu.h"
using namespace std;

int main()
{
	cout << "현재 학생 수 : " << Stu::GetLastNum() << endl;
	Stu* stu = new Stu();
	cout << "학생번호 : " << stu->GetNum() << endl;
	cout << "현재 학생 수 : " << Stu::GetLastNum() << endl;
	Stu* stu2 = new Stu();
	cout << "학생번호 : " << stu->GetNum() << endl;

	delete stu;
	delete stu2;

	return 0;
}