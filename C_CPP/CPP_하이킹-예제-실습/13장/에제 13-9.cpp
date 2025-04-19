// 에제 13-9.cpp
// 파일에서 입력받은 내용을 파일에 출력하기

#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	ifstream fin;
	ofstream fout;

	char ch;

	fin.open("13_09.cpp");
	fout.open("dest.cpp");

	if (fin.fail() || fout.fail()) {
		cout << "파일 오픈을 실패했습니다." << endl;
		return;
	}

	while (fin.get(ch))
		fout.put(ch);

	fin.close();
	fout.close();
}

