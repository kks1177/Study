// 예제 7-7.cpp
// char형 포인터 배열 사용하기

#include <iostream>
using namespace std;

void main()
{
	// char형에 대한 3개의 포인터를 가지는 배열 선언하고 문자열로 초기화
	const char* ptr[3] = { "rabbit", "tiger", "cow" };		// const		<<== error c2440 해결법..

	// 포인터 배열의 각 원소가 할당된 메모리 주소 출력
	cout << "  &ptr[0] = " << (int)&ptr[0] << " \t &ptr[1] = " << (int)&ptr[1] << " \t &ptr[2] = " << (int)&ptr[2] << endl;

	// 포인터 배열의 각 원소에 저장된 문자열의 시작 주소값 출력
	cout << "  ptr[0] = " << (int)ptr[0] << "  \t  ptr[1] = " << (int)ptr[1] << " \t  ptr[2] = " << (int)ptr[2] << "\n\n";

	// 배열의 원소를 "<< <<" 로 출력하면 초깃값으로 준 문자열이 출력됨
	cout << "  ptr[0] = " << ptr[0] << "  \t  ptr[1] = " << ptr[1] << " \t  ptr[2] = " << ptr[2] << endl;

	// 배열의 원소에 *연산을 붙여 한 문자씩 출력
	cout << "  *ptr[0] = " << *ptr[0] << "\t\t  *ptr[1] = " << *ptr[1] << "\t\t *ptr[2] = " << *ptr[2] << endl;
}
