// Stu.cpp

// 예제 2.1
/*
#include "Stu.h"
Stu::Stu(int _num) {
	num = _num;
	iq = 100;
}
void Stu::Study(int tcnt) {
	iq += tcnt;
	if (iq > MAX_IQ) {
		iq = MAX_IQ;
	}
}
*/


// 예제 2.3
/*
#include "Stu.h"
void Stu::Study() {
	cout << "Stu::Study()" << endl;
}
*/


// 예제 2.4
/*
#include "Stu.h"

Stu::Stu(string _name) {
	name = _name;
}

*/


// 예제 2.5
/*
#include "Stu.h"
Stu::Stu(int _num, string _name) {
	num = _num;
	name = _name;
	addr = "";
}
Stu::Stu(int _num, string _name, string _addr) {
	num = _num;
	name = _name;
	addr = _addr;
}
void Stu::View() {
	cout << "번호 : " << num << ", 이름 : " << name << endl;
	if (addr != "") {
		cout << "주소 : " << addr << endl;
	}
}
*/


// 예제 2.6
/*
#include "Stu.h"

Stu::Stu(string _name) {
	name = _name;
}
Stu::Stu(const Stu& stu) {
	cout << "복사 생성자가 수행됨" << endl;
	name = stu.name;
}
void Stu::View() {
	cout << "이름 : " << name << endl;
}
*/


// 예제 2.8

#include "Stu.h"

int Stu::last_num;		// static 멤버 필드는 멤버 필드 선언을 해야 함
Stu::Stu(void) {
	last_num++;
	num = last_num;
}
int Stu::GetNum() {
	return num;
}
int Stu::GetLastNum() {		// static 멤버 메서드 구현 정의에서는 static 키워드 사용 안 함
	return last_num;
}