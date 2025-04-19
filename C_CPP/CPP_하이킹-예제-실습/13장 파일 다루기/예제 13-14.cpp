// 예제 13-14.cpp
// 순차 파일로 원하는 위치의 레코드 읽어오기

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

	int pos;

	bool bFind = true;

	fin.open("..\\13_12\\insa.bin");

	if (fin.fail()) {
		cout << "Error : file open error\n";
		return;
	}
	cout << "# 파일에서 몇 번째 위치의 데이터를 읽고 싶은가요? => ";
	cin >> pos;

	for (int i = 0; i < pos; i++) {
		fin.read((char*)&man, sizeof(man));
		if (!fin.good()) {
			bFind = false;
			break;
		}
	}
	if (bFind == true)
		cout << man.name << " " << man.age << " " << man.address << endl;
	else
		cout << "찾고자 하는 데이터가 없다." << endl;

	fin.close();
}
