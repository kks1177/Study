// 에제 13-6.cpp
// 문자 단위로 파일에서 입력받기
// error..   파일명이 한글로 되어 있어 에러 나는 듯 함...

#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	char ch;

	ifstream fin;

	fin.open("D:\프로그래밍 코딩\C++언어\C++하이킹 예제 실습\13장\13장\test.html");

	if (fin.fail()) {
		cout << "파일 오픈에 실패했습니다." << endl;
		return;
	}
	while (fin.get(ch)) {
		cout.put(ch);
	}
	fin.close();
}

