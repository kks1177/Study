// 예제 5-8.cpp
// 주소에 의한 전달 방식으로 두 변숫값을 교환하는 함수 작성하기

#include <iostream>
using namespace std;

void swap(int* pa, int* pb);		// 주소에 의한 전달 (Call by Adress)

void main()
{
	int a = 10, b = 20;

	cout << " a => " << a << ", b => " << b << "\n";		// a => 10, b => 20

	// swap 함수를 호출할 때, 실 매개변수로 변수의 주소값을 넘겨주고,
	//						  형식 매개변수가 이를 포인터 변수에 저장 (간접 참조)
	swap(&a, &b);	
	cout << " a => " << a << ", b => //" << b << "\n";		// a => 20, b => 10
	
	cout << " &a => " << &a << ", &b => " << &b << "\n";
}

void swap(int* pa, int* pb) {
	int t;

	t = *pa;
	*pa = *pb;
	*pb = t;

	cout << " pa => " << pa << ", pb => " << pb << "\n";
}
