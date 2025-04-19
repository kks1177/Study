// p 1-55.cpp	while문
// while문을 이용하여 1부터 10까지의 합을 구하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num = 1;
	int sum = 0;

	while (num <= 10)
		sum += num++;

	cout << "1부터 10까지의 합 : " << sum << endl;

	return 0;
}