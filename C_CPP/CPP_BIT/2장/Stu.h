// Stu.h
#pragma once

// 예제 2.1
// 캡슐화
/*
#define MAX_IQ 200

class Stu {
	int num;
	int iq;
public:
	Stu(int _num);
	void Study(int tcnt);
};
*/


// 예제 2.3
// 생성자를 개발자가 정의하지 않은 예
/*
#include <iostream>
using namespace std;

class Stu {
public:
	void Study();
};
*/


// 예제 2.4
// 입력 인자가 있는 생성자만 정의
/*
#include <string>
using std::string;

class Stu {
	string name;
public:
	Stu(string _name);
};
*/


// 예제 2.5
// 생성자 중복 정의
/*
#include <iostream>
using namespace std;

class Stu {
	int num;
	string name;
	string addr;
public:
	Stu(int _num, string _name);
	Stu(int _num, string _name, string _addr);
	void View();
};
*/


// 예제 2.6 
// 복사 생성자
/*
#include <iostream>
#include <string>
using namespace std;

class Stu {
	string name;
public:
	Stu(string _name);
	Stu(const Stu& stu);
	void View();
};
*/


// 예제 2.8
// 정적 멤버

class Stu {
	int num;
	static int last_num;		// 정적 멤버 필드
public:
	Stu(void);
	int GetNum();
	static int GetLastNum();	// 정적 멤버 메서드
};