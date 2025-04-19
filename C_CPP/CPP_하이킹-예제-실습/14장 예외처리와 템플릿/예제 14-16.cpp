// 예제 14-16.cpp
// 자료형 2개에 대해 템플릿화하기

#include <iostream>
using namespace std;

//Data<TYPE, ARG_TYPE>
template <typename TYPE, typename ARG_TYPE>

class Data {
	TYPE value;
public:
	Data(TYPE v);
	void CopyData(ARG_TYPE v);
	TYPE GetData();
};

template <typename TYPE, typename ARG_TYPE>
Data<TYPE, ARG_TYPE>::Data(TYPE v) {
	value = v;
}

template <typename TYPE, typename ARG_TYPE>
void Data<TYPE, ARG_TYPE>::CopyData(ARG_TYPE v) {
	value = v;
}

template <typename TYPE, typename ARG_TYPE>
TYPE Data<TYPE, ARG_TYPE>::GetData() {
	return value;
}


void main()
{
	int a = 10;

	Data<int, int&> obj1(10);
	cout << obj1.GetData() << endl;

	obj1.CopyData(a);
	cout << obj1.GetData() << endl;

	double b = 3.4;
	Data<double, double&> obj2(1.5);
	cout << obj2.GetData() << endl;

	obj2.CopyData(b);
	cout << obj2.GetData() << endl;
}
