// 7장 연습문제.cpp
// p.282


// 1번
/*
 - *ptr02 = 2000;					// const int* ptr02 = data;			주소 변경 가능, 내용 변경 불가능
 - ptr03 += 3;						// int* const ptr03 = data;			주소 변경 불가능, 내용 변경 가능
 - ptr04 += 4;, *ptr04 = 4000;		// const int* const ptr04 = data;	포인터가 지정하는 변수의 값과 주소를 바꿀 수 없음
*/


// 2번
/*
#include <iostream>
#include <iomanip>
using namespace std;

// 두 행렬에 대한 차를 구하는 함수의 원형 정의
void sub(int(*pa)[4], int(*pb)[4], int(*pc)[4]);
// -----------------------------------------------------------------
void main()
{
	int a[3][4] = { {10,20,30,40}, {20,40,60,80}, {10,30,50,70} };
	int b[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int c[3][4];
	int row, col;
	sub(a, b, c);
	cout << "두 행렬의 차를 출력하기";
	cout << "\n======================================\n";
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 4; col++) {
			cout << setw(7) << c[row][col];
		}
		cout << endl;
	}
}
// -----------------------------------------------------------------
// 두 행렬에 대한 차를 구하는 함수 정의
void sub(int(*pa)[4], int(*pb)[4], int(*pc)[4]) {
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			pc[r][c] = pa[r][c] - pb[r][c];
		}
	}
}
*/


// 3번
/*
#include <iostream>
using namespace std;

// 함수의 원형 정의
void prnArray(double* pd, int n);
// -----------------------------------------------------------------
void main()
{
	double d[] = { 10,20,30,40,50,60,70,80,90,100 };
	int size = sizeof(d) / sizeof(d[0]);		// 배열 원소의 개수를 구함

	// 함수 호출 : 배열의 시작 주소와 원소의 개수를 전달
	prnArray(d, size);
}
// -----------------------------------------------------------------
// 함수의 정의 
void prnArray(double *pd, int n) {
	for (int i = 0; i < n; i++) {
		cout << pd[i] << "\t";
	}
	cout << endl;
}
*/


// 4번
/*
#include <iostream>
using namespace std;

// 함수의 원형 정의
void add(int* pa, int* pb, int* pc, int n);
// -----------------------------------------------------------------
void main()
{
	int a[] = { 10,20,30 };
	int b[] = { 40,50,60 };
	int c[3];
	int size = sizeof(a) / sizeof(a[0]);		// 배열 원소의 개수를 구한다.

	add(a, b, c, size);		// 함수 호출배열의 시작 주소와 원소의 개수를 전달해준다.

	for (int i = 0; i < size; i++) {
		cout << c[i] << "\t";
	}
	cout << endl;
}
// -----------------------------------------------------------------
// 함수의 정의
void add(int* pa, int* pb, int* pc, int n) {
	for (int i = 0; i < n; i++) {
		pc[i] = pa[i] + pb[i];
	}
}
*/


// 5번
/*
#include <iostream>
using namespace std;

// 함수의 원형 정의
void copy(int* pa, int* pb, int n);
// -----------------------------------------------------------------
void main()
{
	int a[] = { 10,20,30,40,50 };
	int b[5];
	int size = sizeof(a) / sizeof(a[0]);		// 배열 원소의 개수를 구한다.

	copy(a, b, size);		// 함수 호출

	for (int i = 0; i < size; i++) {
		cout << b[i] << "\t";
	}
	cout << endl;
}
// -----------------------------------------------------------------
// 함수의 정의 
void copy(int* pa, int* pb, int n) {
	for (int i = 0; i < n; i++) {
		pb[i] = pa[i];
	}
}
*/


// 6번
#include <iostream>
using namespace std;

// 함수의 원형 정의
int sum(int* pa, int n);
// -----------------------------------------------------------------
void main()
{
	int a[] = { 10,20,30,40,50,60 };
	int size = sizeof(a) / sizeof(a[0]);		// 배열 원소의 개수를 구한다.

	int s = sum(a, size);		// 함수 호출배열의 시작 주소와 원소의 개수를 전달해 준다.

	cout << " 합 = " << s << endl;
}
// -----------------------------------------------------------------
// 함수의 정의
int sum(int* pa, int n) {
	int hap = 0;

	for (int i = 0; i < n; i++) {
		hap += pa[i];
	}
	return hap;
}
