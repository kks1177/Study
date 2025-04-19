// 예제 7-3.cpp
// 2차원 배열을 전달 받는 함수 작성하기

// int (*p)[배열의 원소 개수];		<<== 2차원 배열의 주소값을 저장할 포인터 변수의 형식 

#include <iostream>
using namespace std;

#define ROW 3
#define COL 4

void prn(int(*p)[COL]);

void main()
{
	int a[ROW][COL] = { {90,85,95,100},
					   {75,95,80,90},
					   {90,80,70,60} };
	prn(a);
}

void prn(int(*p)[COL]) {
	int r, c;
	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++) {
			cout << "*(*(a+" << r << ")+" << c << ")) :" << *(*(p + r) + c) << "   ";
		}
		cout << endl;
	}
}
