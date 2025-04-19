// 예제 10-6.cpp
// 함수의 오버로딩 살펴보기

// error C2665
/*
#include <iostream>
using namespace std;

void printstr(char*);
void printstr(char, int);

void main()
{
	printstr("I'm Sorry");
	printstr('a', 3);
}

void printstr(char* the_string) {
	cout << the_string << endl;
}
void printstr(char the_char, int repeat_cnt) {
	for (int i = 0; i < repeat_cnt; i++)
		cout << the_char;
	cout << endl;
}
*/
