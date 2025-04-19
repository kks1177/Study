// 예제 14-9.cpp
// 사용자 정의 예외 클래스(UserError) 정의하기

#include <iostream>
using namespace std;

// 사용자 정의 예외 클래스(UserError) 정의
class UserError {
public:
	void func();
};

void UserError::func() {
	cout << "사용자 정의 예외" << endl;
}

void main()
{
	try {
		throw UserError();
	}
	catch (UserError& ex) {
		cout << "사용자 정의 예외발생에 대한 처리" << endl;
		ex.func();
	}
}
