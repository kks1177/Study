// ex 9-8.cpp
// 사용자 정의 헤더 파일을 만들고 사용하기

#include <iostream>
using namespace std;
#include "my.h	"

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인 함수 */
int main()
{
	int a;
	double res;

	a = 5;
	res = area(a);
	cout << "area => " << res << "\n";
	cout << "PI => " << PI << "\n";
}

/* 함수 정의부 */
