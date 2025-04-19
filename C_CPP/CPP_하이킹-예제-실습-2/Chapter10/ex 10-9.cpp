// ex 10-9.cpp
// 매개변수의 개수가 다른 함수의 오버로딩 살펴보기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
/* 클래스 멤버함수(메소드) 선언부 */

/* 구조체 선언부 */

/* 함수 선언부 */
void print(int x, int y, int z);
void print(int x, int y);
void print(int x);


/* 메인함수 */
int main()
{
	print(10, 20, 30);
	print(10, 20);
	print(10);
}

/* 함수 정의부 */
void print(int x, int y, int z) {
	cout << x << " " << y << " " << z << endl;
}
void print(int x, int y) {
	cout << x << " " << y << endl;
}
void print(int x) {
	cout << x << endl;
}
