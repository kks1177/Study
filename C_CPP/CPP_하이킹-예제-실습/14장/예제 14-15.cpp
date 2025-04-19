// 예제 14-15.cpp
// 자료를 복사하는 일반 클래스 설계하기

#include <iostream>
using namespace std;

class Data {
private:
	int value;
public:
	Data(int v);
	void CopyData(int& v);
	int GetData();
};

Data::Data(int v) {
	value = v;
}
void Data::CopyData(int& v) {
	value = v;
}
int Data::GetData() {
	return value;
}

void main()
{
	int a = 10;

	Data obj1(10);
	cout << obj1.GetData() << endl;

	obj1.CopyData(a);
	cout << obj1.GetData() << endl;
	
	double b = 3.4;
	/*
	Data obj2(1.5);
	cout << obj2.GetData() << endl;

	obj2.CopyData(b);
	cout << obj2.GetData() << endl;
	*/
}
