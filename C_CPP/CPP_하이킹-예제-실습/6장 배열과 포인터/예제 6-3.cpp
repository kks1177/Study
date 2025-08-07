// 예제 6-3.cpp
// 배열을 사용해서 최댓값 구하기

#include <iostream>
using namespace std;

void main()
{
	int a[5];
	int max;
	int i;

	cout << " 정수형 데이터를 5개 입력하라" << endl;

	for (i = 0; i < 5; i++) {
		cout << " a[ " << i << " ] -> ";
		cin >> a[i];
	}

	max = a[0];

	for (i = 1; i < 5; i++)
		if (a[i] > max)
			max = a[i];

	cout << " 최댓값 : " << max << endl;
}
