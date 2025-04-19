// ex 10-6.cpp
// 함수의 오버로딩(Polymorphism) 살펴보기

#include <iostream>
using namespace std;
/* 클래스 선언부 */
/* 클래스 멤버함수(메소드) 선언부 */

/* 구조체 선언부 */

/* 함수 선언부 */
void printstr(string);
void printstr(char, int);

/* 메인함수 */
int main()
{
	printstr("I'm Sorry");
	printstr('a', 3);
}

/* 함수 정의부 */
void printstr(string the_string) {
	cout << the_string << endl;
}
void printstr(char the_char, int repeat_cnt) {
	for (int i = 0; i < repeat_cnt; i++)
		cout << the_char;
	cout << endl;
}