// ex 8-14.cpp
// 구조체에 새로운 자료형 이름 지어주기

#include <iostream>
using namespace std;

/* 구조체 선언부 */
// 성적 관리를 위한 구조체(템플릿) 정의
struct sungjuck {
	char no[8];
	char name[16];
	int kor, eng, mat, tot;
	double ave;
	char level;
	int grade;
};

typedef struct sungjuck SJ;

/* 함수 선언부 */

/* 메인함수 */
int main()                                                                  
{
	SJ s = { "2001029", "이진규", 85, 90, 95 };

	cout << " 학번 \t 이름 \t국어 \t영어 \t수학 \n";
	cout << " ------------------------------------------------------------------------ \n";
	cout << s.no << "\t" << s.name << "\t" << s.kor << "\t" << s.eng << "\t" << s.mat << endl;
}

/* 함수 정의부 */

