// getdata_sensor.c
// 같은 자료형을 사용하지만 다른 목적으로 사용하는 경우의 예제

#include <stdio.h>

unsigned char fSensor;
unsigned char cCode;
unsigned char GetSensor(unsigned char, int);

int main(void)
{
	int i;
	fSensor = 0x08;

	for (i = 0; i < 8; i++) {
		GetSensor(fSensor, i);
	}
	printf("cCode : %c", cCode);

	return 0;
}

unsigned char GetSensor(unsigned char num, int i) {
	if (num >> i)
		cCode = i + 'A';
	else
		cCode = 0;

	return cCode;
}
