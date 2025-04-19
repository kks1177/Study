// 예제 6-8.cpp
// 배열명의 값을 출력하기

// a == &a[0]				--> 주소, 배열명이 배열의 시작 주소
// *a == *&a[0] == a[0]		--> 값
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
	int a[5] = { 10,20,30,40,50 };

	// 배열명 ==>> 배열의 시작 주소
	cout << "     a : " <<     a << endl;
	cout << " &a[0] : " << &a[0] << endl;
}
