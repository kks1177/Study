// ex 7-3.cpp
// 2차원 배열을 전달받는 함수 작성하기 (방법 1)

#include <iostream>
using namespace std;

#define ROW 3
#define COL 4

void prn(int(*p)[COL]);		// 2차원 포인터 변수 선언 방식 1

int main()
{
	int a[ROW][COL] = 
		{ {90, 85, 95, 100},
		{75, 95, 80, 90},
		{90, 80, 70, 60} };
	
	prn(a);		// a는 2차열 배열 
}

void prn(int(*p)[COL]) {			// 2차원 배열의 주소인 a를 전달받기 위해 2차원 포인터 변수 선언
	int r, c;

	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++) {
			cout << "*(*(a+" << r << ")+" << c << ") : " << *(*(p + r) + c) << "	";
		}
		cout << endl;
	}
}