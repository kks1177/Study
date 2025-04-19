// 에제 13-1.cpp
// 구조체 변숫값을 모니터에 출력하기

#include <iostream>
using namespace std;

struct insa {
	char name[20];
	int age;
	char address[20];
};

void main()
{
	insa man = { "성윤정", 20, "서울" };

	cout << man.name << " " << man.age << " " << man.address << endl;
}

