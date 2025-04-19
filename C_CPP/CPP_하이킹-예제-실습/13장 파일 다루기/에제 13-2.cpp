// 에제 13-2.cpp
// 구조체 변수를 << 연산자를 사용해서 파일에 출력하기

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
	insa man = { "성윤정", 20, "서울" };

	ofstream fout;

	fout.open("insa.html");		// insa.html 파일로 출력 방향을 바꿨기 때문에 콘솔에는 아무것도 출력되지 않음.

	fout << man.name << " " << man.age << " " << man.address << endl;

	fout.close();
}

