// 에제 13-7.cpp
// 명령행에서 문자열 읽어오기

#include <iostream>
#include <fstream>
using namespace std;

void main(int argc, char* argv[])
{
	cout << "\n 문자열의 수 => " << argc << endl;

	for (int i = 0; i < argc; i++) {
		cout << " argv[" << i << "] = " << argv[i] << endl;
	}
}
