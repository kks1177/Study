// 예제 8-14.cpp
// 구조체에 새로운 자료형 이름 지어주기

#include <iostream>
using namespace std;

// 성적 관리를 위한 구조체(탬플릿) 정의
struct sungjuck {
	char no[8]; char name[16];	// 학번과 이름
	int kor, eng, mat, tot;		// 국어, 영어, 수학 점수, 총점
	double ave;					// 평균
	char level;					// 학점
	int grade;					// 등수
};

typedef struct sungjuck SJ;

void main()
{
	SJ s = { "2001029", "이진규", 85, 90, 95 };

	cout << " 학번 \t이름 \t국어 \t영어 \t수학 \n";
	cout << "----------------------------------------------- \n";
	cout << s.no << "\t" << s.name << "\t" << s.kor << "\t" << s.eng << "\t" << s.mat << endl;
}
