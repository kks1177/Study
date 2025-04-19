// p 1-83.cpp	연습문제(2)


/* 7. 화면에서 아래 입력 양식과 같은 형식으로 값들을 읽어들여, 산술 연산을 수행하고, 그 결과를 화면에 출력하는 프로그램을 작성하시오.
	(switch문 이용)
	- 입력 : 숫자 symbol(+,-,*,/)숫자 
	- 출력 : 숫자 symbol 숫자 = 계산된 결과 값 */
/*
#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	char op;

	cout << "정수 1 입력 : ";
	cin >> a;
	cout << "연산자(+,-,*,/) 입력 : ";
	cin >> op;
	cout << "정수 2 입력 : ";
	cin >> b;

	switch (op) {
	case '+': cout << a << " + " << b << " = " << a + b << endl;
		break;
	case '-': cout << a << " - " << b << " = " << a - b << endl;
		break;
	case '*': cout << a << " * " << b << " = " << a * b << endl;
		break;
	case '/': cout << a << " / " << b << " = " << a / b << endl;
		break;
	}

	return 0;
}
*/


/* 8. 화면에서 한 개의 정수, a, 를 입력받아, 1부터 a까지의 모든 정수를 더한 값, r, 을 출력하라. (for 문 이용)
	- 출력 : 1부터 a까지의 합은 = r */
/*
#include <iostream>
using namespace std;

int main(void)
{
	int a, r= 0;

	cout << "정수 입력 : ";
	cin >> a;

	for (int i = 1; i <= a; i++)
		r += i;

	cout << "1부터 " << a << "까지의 합은 = " << r << endl;

	return 0;
}
*/


/* 9. 화면에서 사람 수를 입력 받고, 그 사람 수 만큼의 몸무게를 입력받아, 몸무게의 총합,a, 과 평균, r, 을 출력하라. (for문 이용)
	- 출력 : 몸무게 합 : a, 몸무게 평균 : r */
/*
#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	float w, a = 0, r = 0;

	cout << "사람 수 입력 : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "사람" << i << " 몸무게 입력 : ";
		cin >> w;

		a += w;
	}

	r = a / n;

	cout << "몸무게 합 : " << a << ", 몸무게 평균 : " << r << endl;

	return 0;
}
*/


/* 10. 화면에서 한 문자열을 읽어들여, 다시 화면에 출력하는 작업이 반복적으로 진행되도록 프로그램을 작성하시오. 
만약 '0'이 입력되면 종료되도록 하시오. (while 문 이용) */
/*
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;

	while (1) {
		cout << "문자열 입력 : ";
		cin >> s;

		cout << "입력된 문자열 : " << s << endl << endl;

		if (s == "0")
			break;
	}
	return 0;
}
*/


/* 11. 5명의 학생들의 이름, 키, 몸무게를 화면에서 입력받아, 키와 몸무게의 평균을 화면에 출력한다. 
이때, 각 학생들의 속성들을 각각 이름 배열, 키 배열, 몸무게 배열로 저장하여 계산한다. (배열 이용)*/
/*
#include <iostream>
using namespace std;

int main(void)
{
	char name[20];
	float h[20];
	float w[20];
	

	
}
*/


/* 12. 11번의 학생 정보를 struct 를 이용하여 표현하고, 학생 struct 배열에 값들을 저장하도록 수정하라. (struct 배열) */
/*
#include <iostream>
using namespace std; 
int main(void)
{
	
}
*/
