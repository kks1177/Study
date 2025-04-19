// simple_search.cpp
// 단순한 검색 프로그램 코드

#include <iostream>
using namespace std;

int main(void)
{
	int i, input;
	int data[100];

	cout << "찾을 값을 입력하세요 => ";
	cin >> input;

	for (i = 0; i < 1000; i++) {
		if (input == data[i]) {
			cout << "야호! 입력한 값을 찾았습니다..!" << endl;
			break;
		}
	}
	return 0;
}