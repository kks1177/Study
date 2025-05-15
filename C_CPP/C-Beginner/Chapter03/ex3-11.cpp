// ex3-11.cpp
// 소수점이 있는 실수형 사용 예

#include <stdio.h>

int main()
{
	float a = 0.1234567890123456789012345f;
	double b = 0.1234567890123456789012345;

	printf("%30.25f \n", a);
	printf("%30.25lf \n", b);
}
