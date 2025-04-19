// ex 7-2.cpp
// 포인터 변수를 배열로 표현하기

#include <iostream>
using namespace std;

void prn(int a[], int size);

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	
	prn(a, 5);			// 배열을 함수의 매개변수로 사용하려면 반드시 "주소에 의한 전달 방식"을 사용
	cout << " main 함수 sizeof(a) : " << sizeof(a) << endl;		// 20 Byte
}

// 여기서 사용된 a[] 는 형식 매개변수로 사용 (실매개변수 x) --> 포인터 변수 선언
// 즉, 형식 매개변수 int a[]  == int* a
// 표현만 배열처럼 한 것일뿐 배열 x
// 즉, 주소값 하나만 저장할 수 있는 포인터 변수, 프로그래머의 가독성을 생각해 배열처럼 보이기 위한 눈속임
// 함수에게 보내지는 것은 배열의 시작주소이므로 배열이 몇개의 원소로 구성되어 있는지도 함께 함수에 전달
void prn(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "\t" << a[i];
	} cout << endl;

	cout << " prn 함수 sizeof(a) : " << sizeof(a) << endl;		// 4 Byte
}
