// 6장 연습문제.cpp
// p.249


// 1번 : 3, 4


// 2번 : 원소


// 3번
/*
int arr[3];

for(index = 0; index <= 2; index++) {
	arr[index] = 100;
}
*/


// 4번
/*
a, &a[0]
*/


// 5번
/*
*a, *&a[0], a[0]
*/


// 6번 : 1004번지


// 7번
/*
a[3]의 값, 즉, 40
*/


// 8번
/*
(1) a[6],  (2) b[3],  (3) *(c+8), (4) *d
*/


// 9번
/*
*d
*(d+1)
*(d+3)
*(d+i+5)
d+8
*/


// 10번
/*
#include <iostream>
using namespace std;

void main()
{
	int test[] = { 10, 20, 30, 40, 50 };

	cout << " 3번째 원소 출력 ==> " << test[2] << "\n" << endl;

	for (int i = 0; i < 5; i++) {
		cout << test[i] << "\t";
	}
	test[3] = 100;
	test[4] = 200;

	cout << "\n\n 4번째 원소 변경 값  ==> " << test[3];
	cout << "\n 마지막 원소 변경 값 ==> " << test[4] << "\n" << endl;

	for (int i = 0; i < 5; i++) {
		test[i] = 0;
		cout << test[i] << "\t";
	}
	cout << endl;
}
*/


// 11번
/*
#include <iostream>
using namespace std;

#define ROW 2
#define COL 3

void main()
{
	double test[ROW][COL] = { {10.9, 20.8, 30.7}, {40.6, 50.5, 60.4} };

	cout << test[0][1] << endl;

	test[1][2] = 90.1;
	cout << test[1][2] << endl;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << test[i][j] << "\t";
		}
	}
	cout << endl;

	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			test[i][j] = 0;
			cout << test[i][j] << "\t";
		}
	}
}
*/


// 12번
/*
#include <iostream>
using namespace std;

void main()
{
	int score[] = { 75, 80, 90, 60, 85 };
	int size, i;

	size = sizeof(score) / sizeof(score[0]);

	for (int i = size - 1; i >= 0; i--) {
		cout << " score[" << i << "] : " << score[i] << endl;
	}
}

//sizeof(array) / sizeof(array[0])
//이렇게 하면, 배열 요소 개수(number of elements in an array)가 구해집니다.
//sizeof(array) 로, 배열 전체의 바이트(Byte) 수를 구하고
//sizeof(array[0]) 으로, 배열 첫 번째 요소의 크기를 바이트 단위로 구합니다.
//이것을 나누면, 배열의 요소 개수가 나옵니다.
//
//결과:
//score[4] : 85
//score[3] : 60
//score[2] : 90
//socre[1] : 80
//score[0] : 75

*/


// 13번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[10];

	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
		cout << a[i] << "\t";
	}
}
*/


// 14번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++) {
		cout << i+1 << " 월의 날짜 수 : " << a[i] << " 이다. " << endl;
	}
}
*/


// 15번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[5];
	int b[5];

	for (int i = 0; i < 5; i++) {
		cout << "a[" << i << "] => "; 
		cin >> a[i];
	}

	cout << "\n 배열 b에 복사된 값" << endl;
	for (int i = 0; i < 5; i++) {
		b[i] = a[i];
		cout << "\t" << b[i];
	}
	cout << endl;
}
*/


// 16번
/*
#include <iostream>
using namespace std;

void sum(int *pa);

void main()
{
	int a[5] = { 5, 10, 15, 20, 25 };

	sum(a);
}

void sum(int *pa) {
	int total = 0;

	for (int i = 0; i < 5; i++) {
		total += pa[i];
	}
	cout << " 배열 원소의 합 => " << total << endl;
}
*/


// 17번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[10];
	int a_p = 0;	// 양수
	int a_n = 0;	// 음수
	int a_0 = 0;	// 0의 개수

	for (int i = 0; i < 10; i++) {
		cout << " a[" << i << "] => ";
		cin >> a[i];
	}
	
	for (int i = 0; i < 10; i++) {
		if (a[i] > 0)
			a_p += 1;
		else if (a[i] < 0)
			a_n += 1;
		else 
			a_0 += 1;
	}
	cout << " 양의 개수 : " << a_p << endl;
	cout << " 음의 개수 : " << a_n << endl;
	cout << "  0의 개수 : " << a_0 << endl;
}
*/


// ???
// 18번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[5];
	int max = 0;
	int min = 0;

	for (int i = 0; i < 5; i++) {
		cout << " a[" << i << "] => ";
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++) {
		if (a[i] >= a[]) {
			max = a[i];
			min = a[i];
		}
	}
	cout << " 최댓값 : " << max << endl;
	cout << " 최솟값 : " << min << endl;
}
*/


// 19번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[] = { 10,20,30,40,50,60,70,80,90,100 };
	int* ptr = 0;

	ptr = a + 9;

	for (int i = 0; i < 10; i++) {
		cout << " a[" << 9 - i << "]=" << *(ptr - i) << endl;
	}
}
*/


// 20번
/*
#include <iostream>
using namespace std;

void main()
{
	int a[] = { 10,20,30,40,50 };
	int* ptr = 0;
	
	ptr = a;
	ptr += 2;
	*ptr = 90;
	*(ptr + 1) = 95;
	ptr--;
	*ptr = 35;

	for (int i = 0; i < 5; i++)
		cout << " a[" << i << "]=" << a[i] << endl;
}
*/


// 21번
/*
#include <iostream>
using namespace std;

void main()
{
	int score[5];
	int sum = 0;
	float ave = 0;
	int i = 0;
	
	// (1)
	for (i = 0; i < 5; i++) {
		cout << " socre[" << i << "] : ";
		cin >> score[i];
	}

	// (2)
	cout << "\n score[2] : " << score[2] << "\n" << endl;

	// (3)
	for (i = 0; i < 5; i++) {
		cout << " score[" << i << "] : " << score[i] << "\t";
	}
	cout << "\n" << endl;

	// (4)
	score[3] = 100;
	// (5)
	score[4] = 60;

	// (6)
	for (i = 0; i < 5; i++) {
		score[i] -= 5;
		cout << " score[" << i << "] : " << score[i] << "\t";
	}
	cout << "\n" << endl;

	// (7)
	for (i = 0; i < 5; i++) {
		sum += score[i];
	}
	ave = (float)sum / 5;
	cout << " 총점 = " << sum << "\t" << " 평균 = " << ave << endl;
}
*/


// 22번
/*
#include <iostream>
using namespace std;

#define ROW 3
#define COL 5

void main()
{
	// (1)
	int score[ROW][COL] = { {100,80,95,70,90},
							{60,80,90,85,100},
							{85,70,90,85,80} };

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << " score[" << i << "][" << j << "] = " << score[i][j] << "\t";
		}
		cout << endl;
	}

	// (2)
	cout << "\n score[2][1] = " << score[2][1] << endl;
	
	// (3)
	score[1][0] = 80;
	cout << " score[1][0] = " << score[1][0] << "\n" << endl;

	// (4)
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			score[i][j] -= 10;

			// (5)
			cout << " score[" << i << "][" << j << "] = " << score[i][j] << "\t";
		}
		cout << endl;
	}
}
*/


// 23번


// 24번


// 25번


// 26번


// 27번

