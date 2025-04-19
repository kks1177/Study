// 예제 13-13.cpp
// 이진 파일에서 인사 정보를 읽어오기

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

	fin.open("..\\13_12\\insa.bin");

	if (fin.fail()) {
		cout << "Error: file open error\n";
		return;
	}
	cout << " >> 파일에서 읽어올 데이터 << " << endl;
	cout << "------------------------------------\n" << endl;
	cout << " 이름 나이 주소 \n";
	cout << "------------------------------------\n" << endl;
	
	while (fin.read((char*)&man, sizeof(man)))
		cout << man.name << " " << man.age << " " << man.address << endl;

	fin.close();
}
