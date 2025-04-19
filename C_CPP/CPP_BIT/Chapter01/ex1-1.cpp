// ex1-1.cpp
// bool 형식의 제공 - bool 형식 사용 예

#include <iostream>
using namespace std;

int main()
{
	bool check = false;
	int num = 0;

	cout << "아무 수나 입력 : ";
	cin >> num;

	check = (num % 2) == 0;

	if (check) {
		cout << num << "은 짝수 " << endl;
	}
	else {
		cout << num << "은 홀수 " << endl;
	}
}
