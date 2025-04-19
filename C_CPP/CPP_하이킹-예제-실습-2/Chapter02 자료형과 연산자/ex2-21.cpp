// ex2-21.cpp
// 조건 연산자를 이용해서 최댓값 구하기

#include <iostream>
using namespace std;

void main()
{
	int a, b, c;
	int max;

	cout << " 세 수를 입력 : ";
	cin >> a >> b >> c;

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	cout << " 가장 큰 수는 : " << max << "\n";
}
			
