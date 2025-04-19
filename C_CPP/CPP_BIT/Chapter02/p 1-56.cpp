// p 1-56.cpp	do-while문
// do-while 문을 이용하여 1부터 10까지의 합을 구하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num = 1;
	int sum = 0;

	do {
		sum += num++;
	} while (num <= 10);

	cout << "1부터 10까지의 합 : " << sum << endl;

	return 0;
}