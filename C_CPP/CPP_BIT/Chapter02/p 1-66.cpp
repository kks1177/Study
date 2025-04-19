// p 1-66.cpp	함수 오버로딩(2)
// 다음 중 오버로딩된 여러개의 print() 함수 중 각각 어떤 함수가 수행될지 생각해보고 이유를 말해보자.

#include <iostream>
using namespace std;

void print(int);
void print(const char*);
void print(double);
void print(long);
void print(char);
void h(char c, int i, short s, float f);

int main(void)
{
	void h(char c, int i, short s, float f);

	return 0;
}

void print(int) {

}

void h(char c, int i, short s, float f) {
	print(c);		// ?
	print(i);		// ?
	print(s);		// ?
	print(f);		// ?
}