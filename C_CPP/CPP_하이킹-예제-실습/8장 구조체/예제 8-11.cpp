// 예제 8-11.cpp
// 공용체에 값을 저장한 후 저장된 값을 출력하기

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
	test.num = 0x12345678;

	cout << " test.ch  = " << hex << (int)test.ch << endl;
	cout << " test.num = " << hex << test.num << endl;
}
