// 예제 6-18.cpp
// 2차원 배열명의 의미 파악하기

// **a == a[0][0]

#include <iostream>
using namespace std;

#define ROW 3
#define COL 4

void main()
{
	int a[ROW][COL] = { {90,85,95,100},
						{75,95,80,90},
						{90,80,70,60}
	};
	cout << "   a : " << a << endl;		// 배열의 시작 주소
	cout << "  *a : " << *a << endl;	// 배열의 시작 주소
	cout << " **a : " << **a << endl;	// 배열의 첫번째 원소 값
	cout << "----------------------------------------" << endl;
	cout << " a+1 : " << a + 1 << endl;
	cout << " a+2 : " << a + 2 << endl;
}
