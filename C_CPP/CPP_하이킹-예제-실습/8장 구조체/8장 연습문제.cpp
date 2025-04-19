// 8장 연습문제.cpp
// p.321


// 1번
/*
struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};
*/


// 2번
/*
#include <iostream>
using namespace std;

struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};

void main()
{
	score s = { "성윤정", 100, 80, 95 };
	s.tot = s.kor + s.eng + s.mat;
	s.ave = (double)s.tot / 3;

	cout << " 이름\t 국어\t 영어\t 수학\t 총점\t 평균 " << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << s.name << "\t" << s.kor << "\t" << s.eng << "\t" << s.mat << "\t" << s.tot << "\t" << s.ave << endl;
}
*/


// 3번
/*
#include <iostream>
using namespace std;

struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};

void calc(score& temp);

void main()
{
	score s = { "성윤정", 100, 80, 95 };

	calc(s);

	cout << " 이름\t 국어\t 영어\t 수학\t 총점\t 평균 " << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << s.name << "\t " << s.kor << "\t " << s.eng << "\t " << s.mat << "\t " << s.tot << "\t " << s.ave << endl;
}

void calc(score& temp) {
	temp.tot = temp.kor + temp.eng + temp.mat;
	temp.ave = (double)temp.tot / 3;
}
*/


// 4번
/*
#include <iostream>
using namespace std;

struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};

void prn(score temp);

void main()
{
	score s = { "성윤정", 100, 80, 95 };
	s.tot = s.kor + s.eng + s.mat;
	s.ave = (double)s.tot / 3;

	prn(s);
}

void prn(score temp) {
	cout << " 이름\t 국어\t 영어\t 수학\t 총점\t 평균 " << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << temp.name << "\t " << temp.kor << "\t " << temp.eng << "\t " << temp.mat << "\t " << temp.tot << "\t " << temp.ave << endl;
}
*/


// 5번
/*
#include <iostream>
using namespace std;

struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};

void init(score* pTemp);

void main()
{
	score s;

	init(&s);

	s.tot = s.kor + s.eng + s.mat;
	s.ave = (double)s.tot / 3;

	cout << " 이름\t 국어\t 영어\t 수학\t 총점\t 평균 " << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << s.name << "\t " << s.kor << "\t " << s.eng << "\t " << s.mat << "\t " << s.tot << "\t " << s.ave << endl;
}

void init(score* pTemp) {
	cout << "이름을 입력하시오 -> ";
	cin >> pTemp->name;
	cout << "국어 점수를 입력하시오 -> ";
	cin >> pTemp->kor;
	cout << "영어 점수를 입력하시오 -> ";
	cin >> pTemp->eng;
	cout << "수학 점수를 입력하시오 -> ";
	cin >> pTemp->mat;
}
*/


// 6번
/*
#include <iostream>
using namespace std;

struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};

void init(score& temp);
void calc(score& c);
void prn(score p);

void main()
{
	score s;

	init(s);
	calc(s);
	prn(s);
}

void init(score& temp) {
	cout << "이름을 입력하시오 -> ";
	cin >> temp.name;
	cout << "국어 점수를 입력하시오 -> ";
	cin >> temp.kor;
	cout << "영어 점수를 입력하시오 -> ";
	cin >> temp.eng;
	cout << "수학 점수를 입력하시오 -> ";
	cin >> temp.mat;
}
void calc(score& c) {
	c.tot = c.kor + c.eng + c.mat;
	c.ave = (double)c.tot / 3;
}
void prn(score p) {
	cout << " 이름\t 국어\t 영어\t 수학\t 총점\t 평균 " << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << p.name << "\t " << p.kor << "\t " << p.eng << "\t " << p.mat << "\t " << p.tot << "\t " << p.ave << endl;
}
*/


// 7번
/*
#include <iostream>
using namespace std;

struct score {
	char name[16];
	int kor, eng, mat, tot;
	double ave;
};

void init(score temp[]);
void calc(score c[]);
void prn(score p[]);

void main()
{
	score s[5];
	
	init(s);
	calc(s);
	
	cout << "\n 이름\t 국어\t 영어\t 수학\t 총점\t 평균 " << endl;
	cout << "---------------------------------------------------------------" << endl;
	prn(s);
}

void init(score temp[]) {
	for (int i = 0; i < 5; i++) {
		cout << "이름을 입력하시오 -> ";
		cin >> temp[i].name;
		cout << "국어 점수를 입력하시오 -> ";
		cin >> temp[i].kor;
		cout << "영어 점수를 입력하시오 -> ";
		cin >> temp[i].eng;
		cout << "수학 점수를 입력하시오 -> ";
		cin >> temp[i].mat;
	}
}
void calc(score c[]) {
	for (int i = 0; i < 5; i++) {
		c[i].tot = c[i].kor + c[i].eng + c[i].mat;
		c[i].ave = (double)c[i].tot / 3;
	}
}
void prn(score p[]) {
	for (int i = 0; i < 5; i++) {
		cout << p[i].name << "\t " << p[i].kor << "\t " << p[i].eng << "\t " << p[i].mat << "\t " << p[i].tot << "\t " << p[i].ave << endl;
	}
}
*/


// 8번
/*
#include <iostream>
using namespace std;

// 날짜 정보를 저장할 구조체 선언
struct date {
	int year, month, date;
};
struct cd {
	int no;
	char title[25];
	char artist[25];
	int price;
	date indate;
};

void main()
{
	// 구조체 변수 선언하기
	date d;
	cd c = { 1, "TONIGHT", "빅뱅", 15000, {2013, 7, 10} };

	cout << "번호 : " << c.no << endl;
	cout << "제목 : " << c.title << endl;
	cout << "가수 : " << c.artist << endl;
	cout << "가격 : " << c.price << endl;
	cout << "날짜 : ";
	cout << c.indate.year << ", " << c.indate.month << ", " << c.indate.date << endl;
}
*/


// 9번
/*
#include <iostream>
using namespace std;

// 제품명(name)과 가격(price)을 멤버로 갖는 product 구조체 정의
struct product {
	char name[16];
	int price;
};

// 제품명과 가격을 출력하는 함수 prn() 정의
void prn(product& p);

void main()
{
	product p1 = { "웰치스", 700 };
	product p2 = { "커피", 500 };

	prn(p1);
	prn(p2);
}

void prn(product& p) {
	cout << p.name << "\t" << p.price << endl;
}
*/


// 10번
/*
#include <iostream>
using namespace std;

// 시, 분, 초를 하나로 묶어서 관리할 수 있는 구조체 정의
struct time {
	int hour, min, sec;
};
// 시, 분, 초를 입력받아 구조체 변수에 저장하는 get() 함수를 주소 호출 방식(Call by Address)으로 정의
void get(time* pT);
// 시간을 출력하는 prn() 함수를 값 호출 방식(Call by Value)으로 정의
void prn(time t);

void main()
{
	// 구조체 배열을 선언하면서 초기화시켜라.
	struct time list[3];
	int i;

	for (i = 0; i < 3; i++) {
		get(&list[i]);
	}

	for (i = 0; i < 3; i++) {
		prn(list[i]);
	}
}

void get(time* pT) {
	cout << " 시간을 입력하세요. (시 분 초) >> ";
	cin >> pT->hour;
	cin >> pT->min;
	cin >> pT->sec;
}
void prn(time t) {
	cout << t.hour << "\t " << t.min << "\t " << t.sec << endl;
}
*/


// 11번
#include <iostream>
using namespace std;

// 제조회사명(comp)과 메모리 용량(size)을 멤버로 하는 mp3 구조체 정의
struct mp3 {
	char comp[20];
	char size[16];
};
// 제조회사명과 메모리 용량을 출력하는 함수 prn() 정의
void prn(mp3 m);

void main()
{
	mp3 m1 = { "아이리버", "4GB" };
	mp3 m2 = { "삼성 yepp", "8GB" };

	prn(m1);
	prn(m2);
}

void prn(mp3 m) {
	cout << m.comp << "\t " << m.size << endl;
}
