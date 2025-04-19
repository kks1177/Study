// p 1-57.cpp	for문
// for문을 이용하여 1부터 10까지의 합을 구하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int sum = 0;

	for (int num = 1; num <= 10; num++)
		sum += num;

	cout << "1부터 10까지의 합 : " << sum << endl;

	return 0;
}