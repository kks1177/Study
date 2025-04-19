// 예제 6-19.cpp
// 배열의 원소를 포인터 연산자를 이용해서 출력하기

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
	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++) {
			cout << "*(*(a+" << c << ")) : " << *(*(a + r) + c) << "\t";
		}
		cout << endl;
	}
}
