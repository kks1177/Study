// 에제 13-3.cpp
// 구조체 단위로 >> 연산자를 사용해서 파일로 입력받기
// error..   파일명이 한글로 되어 있어 에러 나는 듯 함...

#include <iostream>
#include <fstream>
using namespace std;

struct insa {
	char name[20];
	int age;
	char address[20];
};

void main()
{
	insa man;

	ifstream fin;

	// fin.open("insa.html");
	// fin.open("..\\13_02\\insa.html");
	fin.open("D:\프로그래밍 코딩\C++언어\C++하이킹 예제 실습\13장\13장\insa.html");

	if (fin.fail()) {
		cout << "파일 오픈에 실패했습니다." << endl;

		return;
	}
	fin >> man.name >> man.age >> man.address;

	cout << man.name << " " << man.age << " " << man.address << endl;

	fin.close();
}

