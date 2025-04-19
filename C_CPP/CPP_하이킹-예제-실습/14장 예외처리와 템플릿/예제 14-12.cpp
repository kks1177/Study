// 예제 14-12.cpp
// 절댓값을 구하는 함수의 템플릿화하기		(예제14-11.cpp 을 템플릿 함수를 사용하여 나타낸 코드)

#include <iostream>
using namespace std;

template <typename T>

T myabs(T num) {
	if (num < 0)
		num = -num;
	return num;
}

void main()
{
	int a = -10;
	cout << a << "의 절댓값은 -> " << myabs(a) << endl;

	double b = -3.4;
	cout << b << "의 절댓값은 -> " << myabs(b) << endl;

	long int c = -20L;
	cout << c << "의 절댓값은 -> " << myabs(c) << endl;
}
