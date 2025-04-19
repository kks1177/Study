// p 1-82.cpp	연습문제(1)


// 1. "Computer" 라는 문자열과 100이라는 상수로 정의하여 화면에 출력하기
/*
#include <iostream>
using namespace std;

int main(void)
{
	const char* ch = "Computer";
	int a = 100;

	cout << ch << ", " << a << endl;

	return 0;
}
*/


// 2. 임의의 정수를 화면에서 다시 입력 받아, 다시 화면으로 출력하기. (echo)
/*
#include <iostream>
using namespace std;

int main(void)
{
	int a;

	cout << "임의의 정수를 입력 : ";
	cin >> a;
		
	cout << "입력된 정수 : " << a << endl;

	return 0;
}
*/


// 3. 두개의 정수를 화면에서 입력 받아, +, -, / , *, % 연산을 각각 수행하여 결과를 화면에 출력하기
/*
#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	char op;

	cout << "정수 1 입력 : ";
	cin >> a;
	cout << "정수 2 입력 : ";
	cin >> b;

	cout << "연산자 입력 (+, -, /, *, %) : ";
	cin >> op;

	if (op == '+')
		cout << a << " + " << b << " = " << a + b << endl;
	else if (op == '-')
		cout << a << " - " << b << " = " << a - b << endl;
	else if (op == '/')
		cout << a << " / " << b << " = " << a / b << endl;
	else if (op == '*')
		cout << a << " * " << b << " = " << a * b << endl;
	else if (op == '%')
		cout << a << " % " << b << " = " << a % b << endl;
	else
		cout << "잘못된 입력입니다." << endl;

	return 0;
}
*/


/* 4. 두 개의 정수를 화면에서 입력 받아, 둘 중 큰 수, a, 와 작은 수, b, 를 찾아, 다음과 같이 출력하기. (if문 이용)
	출력 : a is larger than b */
/*
#include <iostream>
using namespace std;

int main(void)
{
	int a, b;

	cout << "정수 1 입력 : ";
	cin >> a;
	cout << "정수 2 입력 : ";
	cin >> b;
	
	if (a > b)
		cout << "a is larger than b" << endl;
	else if (a < b)
		cout << "b is larger than a" << endl;
	else
		cout << "a == b";

	return 0;
}
*/


/* 5. 화면에서 국어(a), 영어(b), 수학(c), 과학(d)의 성적을 각각 실수로 입력 받아, 각 성적의 등급과 전체 평균 성적에 대한 등급을
다음과 같이 출력하라. (if문 이용) 등급은 90점 이상이면 A, 80점 이상이면 B, 80점 미만이면 F이다.
	출력 : 국어 - A, 수학 - A, 과학 - A ==> 평균 : A */
/*
#include <iostream>
using namespace std;

void grade(float k, float e, float m, float s);

int main(void)
{
	float kor, eng, mat, sci;
	float hap, avr;

	cout << "국어 성적 입력 : ";
	cin >> kor;
	cout << "영어 성적 입력 : ";
	cin >> eng;
	cout << "수학 성적 입력 : ";
	cin >> mat;
	cout << "과학 성적 입력 : ";
	cin >> sci;

	cout << "\n < 성적 > 국어 : " << kor << ", 영어 : " << eng << ", 수학 : " << mat << ", 과학" << sci << endl;

	if (kor >= 90)
		cout << "국어 - A";
	else if (kor >= 80)
		cout << "국어 - B";
	else if (kor < 80)
		cout << "국어 - F";

	if (eng >= 90)
		cout << ", 영어 - A";
	else if (eng >= 80)
		cout << ", 영어 - B";
	else if (eng < 80)
		cout << ", 영어 - F";

	if (mat >= 90)
		cout << ", 수학 - A";
	else if (mat >= 80)
		cout << ", 수학 - B";
	else if (mat < 80)
		cout << ", 수학 - F";

	if (sci >= 90)
		cout << ", 과학 - A";
	else if (sci >= 80)
		cout << ", 과학 - B";
	else if (sci < 80)
		cout << ", 과학 - F";
	
	hap = kor + eng + mat + sci;
	avr = hap / 4;

	if (avr >= 90)
		cout << " ==> 평균 : A";
	else if (avr >= 80)
		cout << " ==> 평균 : B";
	else if (avr < 80)
		cout << " ==> 평균 : F";

	return 0;
}
*/


/* 6. 화면에서 연도, y를 입력 받아, 그 해가 윤달이 있는 해인지, 아닌 지를 출력하라. (if문 이용)
공식 : 400 으로 나누어지거나, 4로 나누어지고 100으로 나누어지지 않는 경우 ---> 윤달이 있는 해. 그 외의 경우 ---> 윤달이 없는 해.
	출력 : y는 '윤달이 있는 해'(또는 '윤달이 없는 해') 입니다. */
/*
#include <iostream>
using namespace std;

int main(void)
{
	int year;

	cout << "연도 입력(1900~2021) : ";
	cin >> year;

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		cout << year << "년도는 '윤달이 있는 해' 입니다." << endl;
	else
		cout << year << "년도는 '윤달이 없은 해' 입니다." << endl;

	return 0;
}
*/

