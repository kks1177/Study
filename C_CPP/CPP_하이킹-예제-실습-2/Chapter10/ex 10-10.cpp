// ex 10-10.cpp
// 함수의 매개변수에 기본값 지정하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
/* 클래스 멤버함수(메소드) 선언부 */

/* 구조체 선언부 */

/* 함수 선언부 */
void print(int x = 0, int y = 0, int z = 0);

/* 메인 함수 */
int main()
{   
	print(10, 20, 30);
	print(10, 20); 
	print(10); 
	print();
}

/* 함수 정의부 */
void print(int x, int y, int z) {
	cout << x << " " << y << " " << z << endl; 
}
