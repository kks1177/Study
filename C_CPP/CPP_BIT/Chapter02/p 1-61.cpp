// p 1-61.cpp	매개변수 전달방법(1)
// Call by Value에 의하여 값을 바꾸는 swap 프로그램

#include <iostream>
using namespace std;

void swap(int, int);

int main(void)
{
	int i = 10, j = 20;
	
	cout << "before swap : i = " << i << ", j = " << j << endl;
	swap(i, j);
	cout << "after swap: i = " << i << ", j = " << j << endl;

	return 0;
}

void swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	
	cout << "in swap() : n1 = " << n1 << ", n2 = " << n2 << endl;
}