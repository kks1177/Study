// 예제 6-2.cpp
// 배열을 사용해서 총합과 평균 구하기

#include <iostream>
using namespace std;

void main()
{
	int a[5] = { 85, 90,75,100,95 };
	int tot = 0;
	double avg;
	int i;

	for (i = 0; i < 5; i++)
		tot += a[i];		// tot = tot + a[i];

	avg = (double)tot / 5.0;

	cout << " 총합 = " << tot << endl;
	cout << " 평균 = " << avg << endl;
}
