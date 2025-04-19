// p 1-18.cpp	typedef
// typedef 를 이용해 자료형에 새로운 별명을 부여하고 변수를 선언한 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	typedef int EmpNo;

	EmpNo no1 = 1000;
	EmpNo no2 = no1 + 100;

	cout << "홍길동의 사원 번호는 " << no1 << " 입니다." << endl;
	cout << "원균의 사원 번호는 " << no2 << " 입니다." << endl;

	return 0;
}
