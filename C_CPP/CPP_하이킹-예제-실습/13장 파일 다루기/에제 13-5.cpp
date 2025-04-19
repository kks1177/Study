// 에제 13-5.cpp
// 키보드로 입력받은 문자를 파일에 출력하기

#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	char ch;

	ofstream fout;

	fout.open("test.html");

	while (cin.get(ch))
		fout.put(ch);

	fout.close();
}
