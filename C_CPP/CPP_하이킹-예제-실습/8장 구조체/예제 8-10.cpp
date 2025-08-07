// 예제 8-10.cpp
// 공용체 분석하기

// 공용체 : 메모리 효율성(활용성)의 향상을 위해 사용
//			모든 멤버변수가 동일한 기억공간에 중복되어 할당
//			구조체와 달리 멤버 중에서 가장 큰 자료형의 크기로 메모리가 할당

#include <iostream>
using namespace std;

// 공용체 정의
union u_data {
	char ch;	// 문자형 데이터 멤버
	int num;	// 정수형 데이터 멤버
};

void main()
{
	u_data test;	// 공용체 변수 선언

	// 공용체의 크기 출력
	cout << " sizeof(u_data) \t : " << sizeof(u_data) << " byte " << endl;

	// 공용체 변수의 주소
	cout << " &test		\t : " << (int)&test << endl;

	// 공용체 멤버의 주소
	cout << " &test.ch	\t : " << (int)&test.ch << endl;
	cout << " &test.num	\t : " << (int)&test.num << endl;
}
