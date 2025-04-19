// 예제 14-14.cpp
// 데이터를 저장하고 얻어오는 템플릿 클래스 정의하기		(예제14-11.cpp 을 템플릿 함수를 사용하여 나타낸 코드)

#include <iostream>
using namespace std;

template <typename DATATYPE>

class Test {
	DATATYPE value;
public:
	Test(DATATYPE v);
	void SetValue(DATATYPE v);
	DATATYPE GetValue();
};

template <typename DATATYPE>
Test<DATATYPE>::Test(DATATYPE v) {
	value = v;
}

template <typename DATATYPE>
void Test<DATATYPE>::SetValue(DATATYPE v) {
	value = v;
}

template <typename DATATYPE>
DATATYPE Test<DATATYPE>::GetValue() {
	return value;
}

void main()
{
	Test<int> obj1(10);
	obj1.SetValue(10);
	cout << obj1.GetValue() << endl;

	Test<double> obj2(5.7);
	cout << obj2.GetValue() << endl;
}

