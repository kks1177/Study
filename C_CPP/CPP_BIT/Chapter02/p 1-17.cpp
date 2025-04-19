// p 1-17.cpp	Enum
// 열거형 변수를 선언하고 각각의 요소의 값을 알아보는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	enum colors { RED = 1, YELLOW = 2, BLUE = 4, GREEN = 8 };

	//colors c1 = 5;		// warning or error
	colors c2 = colors(5);
	colors c3 = colors(BLUE | GREEN);
	colors c4 = colors(99);

	colors c5 = RED;
	colors c6 = YELLOW;
	//colors c7 = RED + YELLOW;		// warning or error

	//cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "c3 = " << c3 << endl;
	cout << "c4 = " << c4 << endl;

	cout << "c5 = " << c5 << endl;
	cout << "c6 = " << c6 << endl;
	//cout << "c7 = " << c7 << endl;

	return 0;
}