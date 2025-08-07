// 예제 6-5.cpp
// 두 행렬의 합 구하기

#include <iostream>
using namespace std;

void main()
{
	int a[3][4] = { {10,20,30,40}, {20,40,60,80}, {10,30,50,70} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int d[3][4];
	int r, c;

	for (r = 0; r < 3; r++)
		for (c = 0; c < 4; c++)
			d[r][c] = a[r][c] + b[r][c];

	cout << " 두 행렬의 합을 출력하기";
	cout << "\n ==============================" << endl;

	for (r = 0; r < 3; r++) {
		for (c = 0; c < 4; c++)
			cout << " " << d[r][c];
		cout << endl;
	}
}
