// p 1-51.cpp	new & delete
// new 와 delete를 이용하여 배열의 크기를 동적으로 조절하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int* intarr;
	int arrsize, i = 0;

	cout << "몇개의 숫자를 입력하시겠습니까?  ";
	cin >> arrsize;

	intarr = new int[arrsize];

	cout << "-------------------------------------" << endl;

	while (i < arrsize) {
		cout << i << "st : 숫자를 입력하여 주십시오 : ";
		cin >> intarr[i];
		i++;
	}
	
	cout << "-------------------------------------" << endl;
	cout << "당신이 입력하신 숫자는 다음과 같습니다.  " << endl;
	
	for (i = 0; i < arrsize; i++) {
		cout << intarr[i] << "\t";
		if ((i + 1) % 5 == 0) cout << endl;
	}
	cout << endl;
	delete[] intarr;

	return 0;
}