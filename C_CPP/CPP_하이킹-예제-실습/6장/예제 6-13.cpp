// 예제 6-13.cpp
// 2차원 포인터 사용하기
// 책 예제 보면서 이해하기..

/*
 변수 선언 : *, []		차원 UP
 변수 사용 : *, []		차원 DOWN

 차원
	0차		 : 값
	1차 이상 : 주소
 */

#include <iostream>
using namespace std;

void main()
{
	int a = 5;	// 일반 변수
	int* p;		// 1차원 포인터 변수
	int** pp;	// 2차원 포인터 변수

	p = &a;
	pp = &p;

	cout << "    p : " <<    p << " \t &a : " << &a << endl;		// a의 주소값, a의 주소값
	cout << "   *p : " <<   *p << " \t \t  a : " << a << endl;		// 5, 5
	cout << "   pp : " <<   pp << " \t &p : " << &p << endl;		// p의 주소값, p의 주소값
	cout << "  *pp : " <<  *pp << " \t  p : " << p << endl;			// a의 주소값, a의 주소값
	cout << " **pp : " << **pp << " \t \t *p : " << *p << endl;		// 5, 5
}
