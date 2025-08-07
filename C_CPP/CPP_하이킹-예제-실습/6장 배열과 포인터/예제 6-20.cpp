// 예제 6-20.cpp
// 2차원 배열의 주소를 저장하기 위한 포인터 변수 알아보기

#include <iostream>
using namespace std;

#define ROW 3
#define COL 4

void main()
{
	int a[ROW][COL] = { {90,85,95,100},
						{75,95,80,90},
						{90,80,70,60} };

	int r, c;
//	int **p;		// 잘못된 변수 선언
	int(*p)[4];		// 올바른 변수 선언

	p = a;

	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++) {
			cout << "*(*(a+" << r << ")+" << c << ")):" << *(*(p + r) + c) << " \t";
		}
		cout << endl;
	}
}