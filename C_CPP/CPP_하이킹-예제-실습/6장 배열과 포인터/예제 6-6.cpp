// 예제 6-6.cpp
// 2차원 배열을 사용해서 성적 구하기

#include <iostream>
using namespace std;

#define ROW 3
#define COL 5

void main()
{
	int a[ROW][COL] = { 0, };
	int r, c;

	for (r = 0; r < ROW; r++) {
		a[r][0] = r + 1;
		cout << "# " << a[r][0] << " 번째 학생의 점수를 입력하세요" << endl;

		for (c = 1; c <= COL - 2; c++) {
			cout << c << "번째 과목 : ";
			cin >> a[r][c];
		}
	}

	for (r = 0; r < ROW; r++) {
		for (c = 1; c <= COL - 2; c++) {
			a[r][COL - 1] += a[r][c];
		}
	}
	cout << "\n \t \t ** 출 력 결 과 ** ";
	cout << "\n --------------------------------------------";
	cout << "\n \t번호 \t국어 \t영어 \t수학 \t총점";
	cout << "\n --------------------------------------------" << endl;
	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++)
			cout << "\t " << a[r][c];
		cout << endl;
	}
}
