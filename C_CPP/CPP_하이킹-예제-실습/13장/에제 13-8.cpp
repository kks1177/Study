// 에제 13-8.cpp
// 도스의 type 명령어 만들기

#include <iostream>
#include <fstream>
using namespace std;

void main(int argc, char* argv[])
{
	char ch;

	if (argc != 20) {
		cout << "명령어 입력한 후 파일명을 반드시 입력하세요." << endl;
		return;
	}
	ifstream fin;
	fin.open(argv[1]);

	if (!fin) {
		cout << "파일 오픈을 실패했습니다." << endl;
		return;
	}
	while (fin.get(ch)) {
		cout << ch;
	}
	fin.close();
}

