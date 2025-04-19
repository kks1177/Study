// ex 11-11.cpp
// 인스턴스의 개수를 세는 정적 멤버변수 이용하기
/*
1. 클래스명은 CStud로 지정
2. 이름, 핸드폰 번호, 이메일 주소를 저장할 멤버변수 3개를 멤버로 갖음. 각 멤버변수명은 name, hphone, email
3. 생성자는 함수를 정의하되 이름, 핸드폰, 이메일에 기본 매개변수 값을 줌
4. 각 객체의 멤버변수 값을 화면에 출력하는 멤버함수 정의
5. 정적 변수 cnt를 선언하되 등록한 학생이 있을 때마다 등록한 학생의 수를 세려고 객체가 하나씩 생성될
  때마다 자동 호출되는 생성자에서 cnt를 1씩 증가시킴.
  */

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class CStud {
private:
	char name[20];			// 멤버변수 선언
	char hphone[20];		// 멤버변수 선언
	char email[20];			// 멤버변수 선언
	static int cnt;			// 정적 멤버변수 선언				// 등록한 학생 인원 수
public:
	CStud(const char* n = "김기성", const char* h = "010-2481-1177", const char* e = "0826391@naver.com");		// 생성자
	~CStud();			// 소멸자
	void prn();
	static void prn_cnt();		// 정적 멤버함수(메소드) 선언
};
/* 클래스 멤버함수(메소드) 선언부 */
int CStud::cnt = 0;
CStud::CStud(const char* n, const char* h, const char* e) {			// 생성자
	strcpy_s(name, n);
	strcpy_s(hphone, h);
	strcpy_s(email, e);
	cnt++;
}
CStud::~CStud() {			// 소멸자
	cnt--;
}
void CStud::prn() {
	cout << "이름 : " << name << endl;
	cout << "핸드폰 : " << hphone << endl;
	cout << "이메일 : " << email << endl;
}
void CStud::prn_cnt() {
	cout << "\n 현재까지 등록된 인원 수 : " << cnt << "\n\n";
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	CStud::prn_cnt();

	CStud man1("전수빈", "010-9087-0975", "subin@pride.com");		// 객체1 생성
	man1.prn();
	CStud man2("전원지", "017-9087-0975", "won@pride.com");			// 객체2 생성
	man2.prn();

	cout << "\n # 중간에 인원 수를 파악합니다.";
	man2.prn_cnt();

	CStud man3;																				// 객체3 생성
	man3.prn_cnt();

	cout << "\n 클래스의 할당된 메모리 사이즈 : " << sizeof(CStud);
	cout << "\n";
	CStud::prn_cnt();
}

/* 함수 정의부 */

