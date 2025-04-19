// p 1-20.cpp	구조체(2)
// 구조체를 선언하고 복사와 대입 연산이 수행됨을 확인하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	typedef struct {
		char name[20];		// 첫번째 구조체 멤버
		char phoneno[20];	// 두번째 구조체 멤버
	} Phone;

	Phone myphone;		// 구조체 변수1 선언
	strcpy_s(myphone.name, "Hong, Gil-Dong");
	strcpy_s(myphone.phoneno, "02-111-1234");

	Phone yourphone = myphone;		// 구조체 변수2 선언, 복사 연산 수행
	Phone hisphone;
	hisphone = myphone;		// 구조체 변수3 선언, 대입 연산 수행

	cout << "YourName : " << yourphone.name << endl;
	cout << "YourPhone : " << yourphone.phoneno << endl;

	cout << "HisName : " << hisphone.name << endl;
	cout << "HisPhone : " << hisphone.phoneno << endl;

	return 0;
}