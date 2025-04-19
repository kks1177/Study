// 예제 11-11.cpp
// 인스턴스의 개수를 세는 정적 멤버변수 이용하기

#include <iostream>
using namespace std;

class CStud {
	char name[30];
	char hphone[20];
	char email[30];
	static int cnt;		// 정적 멤버변수 선언
public:
	CStud(const char* n = "성윤정", const char* h = "017-777-7777", const char* e = "pink@daum.net");
	~CStud();		// 소멸자
	void prn();
	static void prn_cnt();		// 정적 멤버함수 선언
};

int CStud::cnt = 0;

CStud::CStud(const char* n, const char* h, const char* e) {		// 생성자
	strcpy_s(name, n);
	strcpy_s(hphone, h);
	strcpy_s(email, e);
	cnt++;
}
CStud::~CStud() {		// 소멸자
	cnt--;
}
void CStud::prn() {
	cout << " 이름 : " << name << endl;
	cout << " 핸드폰 : " << hphone << endl;
	cout << " 이메일 : " << email << endl;
}
void CStud::prn_cnt() {
	cout << "\n 현재까지 등록된 인원 수 : " << cnt << "\n\n";
}

void main()
{
	CStud::prn_cnt();

	CStud man1("전수빈", "010-9087-0987", "subin@pride.com");	// 객체1 생성
	man1.prn();
	CStud man2("전원지", "017-1245-6823", "won@pride.com");		// 객체2 생성
	man2.prn();

	cout << "\n # 중간에 인원수를 파악합니다.";
	man2.prn_cnt();

	CStud man3;		// 객체3 생성
	man3.prn();

	cout << "\n 클래스의 할당된 메모리 사이즈 : " << sizeof(CStud);
	cout << endl;
	CStud::prn_cnt();
}
