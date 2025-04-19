// 에제 13-10.cpp
// 도스의 copy 명령어 만들기

#include <iostream>
#include <fstream>
using namespace std;

void main(int argc, char* argv[])
{
	ifstream fin;
	ofstream fout;

	char ch;

	if (argc != 3) {
		cout << "명령어 입력한 후 원본 파일명과 복사본 파일명을 입력하세요." << endl;
		exit(0);
	}

	fin.open(argv[1]);
	fout.open(argv[2]);

	if (fin.fail() || fout.fail()) {
		cout << "파일 오픈을 실패했습니다." << endl;
		return;
	}

	while (fin.get(ch))
		fout.put(ch);

	fin.close();
	fout.close();
}

