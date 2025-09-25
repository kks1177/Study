// getdata_sensor2.cpp
// 같은 자료형을 사용하지만 다른 목적으로 사용하는 경우의 예제

#include <iostream>
using namespace std;

typedef unsigned char SENSOR;
typedef unsigned char CODE;
SENSOR fSensor;
CODE cCode;
CODE GetSensor(SENSOR, int);

int main(void)
{
	int i;
	fSensor = 0x08;

	for (i = 0; i < 8; i++) {
		GetSensor(fSensor, i);
	}
	cout << "cCode :  " << cCode << endl;

	return 0;
}

CODE GetSensor(SENSOR num, int i) {
	if (num >> i)
		cCode = i + 'A';
	else
		cCode = 0;

	return cCode;
}
