// 에제 13-4.cpp
// 키보드로 입력받은 문자를 모니터에 출력하기

#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	char ch;

	while (cin.get(ch))
		cout.put(ch);
}
