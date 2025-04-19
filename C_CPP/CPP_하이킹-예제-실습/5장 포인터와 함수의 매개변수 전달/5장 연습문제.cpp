// 5장 연습문제.cpp
// p.207


// 1번 : &연산자

// 2번 
/*
#include <iostream>
using namespace std;

void main()
{
	int n = 10;
	int* ptr;

	ptr = &n;
	
	cout << " n => " << n << ", ptr => " << ptr << endl;
}
*/

// 3번 : *연산자

// 4번
/*
#include <iostream>
using namespace std;

void main()
{
	int n = 10;
	int* ptr;

	ptr = &n;
	*ptr = 100;	

	cout << " n => " << n << ", ptr => " << ptr << endl;
}
*/

// 5번
/*
#include <iostream>
using namespace std;

void main()
{
	int n;
	int* ptr;

	ptr = &n;
}
*/

// 6번
/*
#include <iostream>
using namespace std;

void main()
{
	int x = 10, y = 15, xvalue, yvalue;
	int* ptrx = &x, * ptry = &y;

	xvalue = *ptrx, yvalue = *ptry;
	cout << "\n xvalue = " << xvalue << ", *ptrx = " << ptrx;	// xvalue = 10, *ptrx = x의 주소값
	cout << "\n yvalue = " << yvalue << ", *ptry = " << ptry;	// xvalue = 15, *ptrx = y의 주소값

	ptrx = ptry;
	cout << "\n ptrx = " << *ptrx << ", *ptry = " << *ptry;		// *ptrx = 15, *ptry = 15
	cout << "\n xvalue = " << xvalue << ", yvalue = " << yvalue << endl;		// xvalue = 10, yvalue = 15
}
*/

// 7번
// (1)
/*
#include <iostream>
using namespace std;

void main()
{
	char a = 'A';
	int* ptr;		// 자료형이 다름, int형 -> char형으로 변경
	ptr = &a;
}
*/
// (2)
/*
#include <iostream>
using namespace std;

void main()
{
	int* ptr = NULL;
	if (ptr != NULL)
		*ptr = 10;		// *연산자는 포인터가 가리키는 메모리 주소에 있는 값을 추출하는 역할이기 때문에 주소를 받을 변수가 필요하다.
}
*/

// 8번
/* 
포인터 변수를 선언할 때 그 변수가 단순히 포인터 변수라는 정보만으로는 불충분하기 때문
*/

// 9번
/* 
 - 값에 의한 전달 방식 (Call by Value), 
 - 주소에 의한 전달 방식 (Call by Address), 
 - 참조에 의한 전달 방식 (Call by Reference)
 */

// 10번
/*
	*연산자 : 포인터가 가리키는 메모리 주소에 있는 값을 추출
*/

// 11번
/*
	(1) : 변수 n을 10으로 선언·초기화하고, 포인터 변수 ptr을 선언과 동시에 n의 주소값을 대입한다.
	(2) : 포인터 변수 ptr이 가리키는 주소에 20을 대입
*/

// 12번
/*
#include <iostream>
using namespace std;

void main()
{
	int* pi;
	char* pc1, * pc2;
	double n;
	double* pd;
	int* ptr;

	pd = &n;
	ptr = NULL;
}
*/

// 13번
/*
#include <iostream>
using namespace std;

void main()
{
	double n;
	double* ptr;

	ptr = &n;
	*ptr = 3.4;

	cout << " n => " << n << ", ptr => " << ptr << endl;
}
*/

// 14번
/*
#include <iostream>
using namespace std;

void func01(int value);
void func02(int* address);

void main()
{
	int a = 20;
	func01(a);
	cout << " \n main 함수에서 func01 호출 후 a = " << a << endl;		// 20
	func02(&a);
	cout << " \n main 함수에서 func01 호출 후 a = " << a << endl;		// 40
}

void func01(int value) {
	value += 20;
	cout << " \n func01 = " << value;		// 40
}

void func02(int* address) {
	*address += 20;
	cout << " \n func02 = " << *address;	// 40
}
*/

// 15번
/*
#include <iostream>
using namespace std;

// 절댓값을 구하는 함수 absolute의 선언 (주소 호출 방식 - Call by Address)
void absolute(int* ptr);

void main()
{
	int a = -10;
	cout << " main에서 함수 호출 전 a 값 = " << a << endl;
	absolute(&a);
	cout << " main에서 함수 호출 후 a 값 = " << a << endl;
}

void absolute(int *ptr) {
	*ptr = -*ptr;
}
*/

// 16번
/*
#include <iostream>
using namespace std;

// 절댓값을 구하는 함수 absolute의 선언 (주소 호출 방식 - Call by Address)
void absolute(int& ptr);

void main()
{
	int a = -10;
	cout << " main에서 함수 호출 전 a 값 = " << a << endl;
	absolute(a);
	cout << " main에서 함수 호출 후 a 값 = " << a << endl;
}

void absolute(int& ptr) {
	ptr = -ptr;
}
*/
