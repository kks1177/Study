// ex 7-4.cpp
// 2차원 배열을 매개변수로 사용하는 함수 작성하기 (방법 2)

#include <iostream>
using namespace std;

#define ROW 3
#define COL 4

void prn(int p[][4]);		// 2차원 포인터 변수 선언 방식 2

int main()
{
	int a[ROW][COL] =
	{ {90, 85, 95, 100},
		{75, 95, 80, 90},
		{90, 80, 70, 60} };

	cout << "main sizeof(a) = " << sizeof(a) << endl;
	prn(a);
}

void prn(int p[][4]) {
	int r, c;

	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++) {
			cout << "a[" << r << "][" << c << "] : " << p[r][c] << "\t";
		}
		cout << endl;
	}
	cout << "prn sizeof(p) = " << sizeof(p) << endl;
}
