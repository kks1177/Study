// efficient_search.cpp
// 그나마 알고리즘스러운 검색 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int i, input, min, max;
	int data[100];

	cout << "찾을 값을 입력하세요 => ";
	cin >> input;

	min = 0;
	max = 1000;
	i = max / 2;

	while (1) {
		if (input == data[i]) {
			cout << "야호! 입력한 값을 찾았습니다..!" << endl;
			break;
		}
		else if (input < data[i]) {
			max = max / 2;
		}
		else
			min = max / 2;
		i = max / 2;
	}
	return 0;
}