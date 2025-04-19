// 11장 연습문제.cpp


// 1번
/*
#include <iostream>
using namespace std;

class Test {
	int num;
public:
	void init();
	void prn();
};

void Test::init() {
	num = 20;
}
void Test::prn() {
	cout << num << endl;
}

void main()
{
	Test a, * p;
	p = &a;

	// 객체 a로 init 함수 호출
	a.init();

	// 객체 a로 prn 함수 호출
	a.prn();

	// 객체 포인터 p로 init 함수 호출
	p->init();

	// 객체 포인터 p로 prn 함수 호출
	p->prn();
}
*/


// 2번
/*
100, 100, 100
100, 100, 100
0, 0 ,0
0, 100, 100
*/


// 3번
/*
#include <iostream>
using namespace std;

class abc {
private:
	int a;
public:
	void init();

	// 1. 프렌트 함수 선언
	friend void prn(abc ab);
};

void abc::init() {
	a = 10;
}
// 2. 프렌드 함수 정의
void prn(abc ab) {
	cout << ab.a << endl;
}

void main()
{
	abc k;

	k.init();
	prn(k);		// 프렌드 함수 정의
}
*/


// 4번
/*
#include <iostream>
using namespace std;

class Movie {
	int movie_code;
	char m_title[30];
	char d_name[30];
	char a_name[30];
	char m_genre[30];
	char opening_date[30];
public:
	Movie(int c, const char* m, const char* d, const char* a, const char* g, const char* o);
	void print();
};

Movie::Movie(int c, const char* m, const char* d, const char* a, const char* g, const char* o) {
	movie_code = c;
	strcpy_s(m_title, m);
	strcpy_s(d_name, d);
	strcpy_s(a_name, a);
	strcpy_s(m_genre, g);
	strcpy_s(opening_date, o);
}
void Movie::print() {
	cout << "    >> 영화 정보 << " << endl;
	cout << " 영화코드 : \t" << movie_code << endl;
	cout << " 영화제목 : \t" << m_title << endl;
	cout << " 감독 : \t" << d_name << endl;
	cout << " 출연진 : \t" << a_name << endl;
	cout << " 장르 : \t" << m_genre << endl;
	cout << " 개봉일자 : \t" << opening_date << endl;
}

void main()
{
	Movie movie(1, "건축학개론", "이용주", "엄태웅, 한가인", "멜로", "2012/04/15");
	movie.print();
}
*/


// 5번
/*
#include<iostream>
using namespace std;

class Student {
private:
	int student_no;
	int score_kor, score_eng, score_math;
	int score_total;
	double score_avg;
	char student_name[256];
public:
	Student(int s_no, const char* s_name, int k, int e, int m);
	void print();
	void Calculate();
};
Student::Student(int s_no, const char* s_name, int k, int e, int m) {
	strcpy_s(student_name, s_name);
	student_no = s_no;
	score_kor = k;
	score_eng = e;
	score_math = m;

	Calculate();
}
void Student::Calculate() {
	score_total = score_kor + score_eng + score_math;
	score_avg = (double)score_total / 3;
}
void Student::print()
{
	cout << student_no << "\t\t" << student_name << "\t" << score_kor << "\t" << score_eng << "\t" << score_math << "\t" << score_total << "\t" << score_avg << endl;
}
void main()
{
	Student student1(1, "황순혜", 99, 80, 95);
	Student student2(2, "이민우", 60, 80, 90);
	Student student3(3, "김덕윤", 85, 70, 90);

	cout << "학생번호\t 이름	국어	영어	수학	총점	평균\n";
	student1.print();
	student2.print();
	student3.print();
}
*/


// 6번
/*
#include<iostream>
using namespace std;

class Account {
private:
	char accountNumber[256];
	char ownerName[256];
	int balance;
public:
	Account(const char* a_n, const char* a_o, int a_b);
	void deposit(int Money);
	void withdraw(int Money);
	void getBalance();
	void prnAccount();
};

Account::Account(const char* a_n, const char* a_o, int a_b) {
	strcpy_s(accountNumber, a_n);
	strcpy_s(ownerName, a_o);
	balance = a_b;
}
void Account::deposit(int Money) {
	cout << accountNumber << "에 " << Money << "원 입금" << endl;
	balance = balance + Money;
}
void Account::withdraw(int Money) {
	cout << accountNumber << "에서 " << Money << "원 출금" << endl;
	balance = balance - Money;
}
void Account::getBalance() {
	cout << accountNumber << "계좌의 현재 잔고는 " << balance << "원 입니다." << endl;
}
void Account::prnAccount() {
	cout << "계좌정보 => 계좌번호 : " << accountNumber << "    계좌 소유주 이름 : " << ownerName << "    잔고 : " << balance << "원" << endl;
}

void main()
{
	Account acc1("360-20-332921", "김선미", 45000);
	acc1.prnAccount();
	Account acc2("549-45-213942", "이지연", 65000);
	acc2.prnAccount();
	Account acc3("280-13-451345", "임현아", 5000);
	acc3.prnAccount();

	acc1.deposit(100000);
	acc1.withdraw(30000);
	acc2.deposit(400000);
	acc1.getBalance();
	acc2.getBalance();
}
*/


// 7번
/*
#include<iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex operator *(Complex multi);
};

Complex::Complex(int r, int i) : real(r), image(i) 
{
}
Complex Complex::operator *(const Complex multi) {
	Complex Result;

	Result.real = (this->real * multi.real) + (this->image * multi.image);
	Result.image = (this->real * multi.image) + (this->image * multi.real);

	return Result;
}
void Complex::ShowComplex() {
	cout << "(" << real << " + " << image << "i)" << endl;
}

void main()
{
	Complex x(1, 2), y(2, 4), z;

	cout << "--두 Complex 객체에 대한 곱셈--\n";
	z = x * y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}
*/


// 8번
/*
#include<iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	friend Complex Minus(Complex ob1, Complex ob2);
};

Complex::Complex(int r, int i) : real(r), image(i)
{
}
void Complex::ShowComplex() {
	cout << "(" << real << " + " << image << "i)" << endl;
}
Complex Minus(Complex ob1, Complex ob2) {
	Complex Result;

	Result.real = ob1.real - ob2.real;
	Result.image = ob1.image - ob2.image;

	return Result;
}

void main()
{
	Complex x(1, 2), y(2, 4), z;
	cout << "--두 Complex 객체에 대한 뺄셈--\n";
	z = Minus(x, y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}
*/


// 9번
/*
#include<iostream>
using namespace std;

class abc {
private:
	int real;
	int image;
public:
	abc(int r = 0, int i = 0);
	void ShowComplex();
	abc Sub();
};

abc::abc(int r, int i) : real(r), image(i)
{
}
void abc::ShowComplex() {
	cout << "(" << real << " + " << image << "i) " << endl;
}
abc abc::Sub() {
	--this->real;
	--this->image;

	return *this;
}

void main()
{
	abc x(1, 2), z;
	cout << "함수 호출 전\n";
	x.ShowComplex();
	z.ShowComplex();
	cout << "객체를 1 감소하는 멤버함수 \n";
	z = x.Sub();
	x.ShowComplex();
	z.ShowComplex();
}
*/


// 10번
/*
#include<iostream>
using namespace std;

class abc {
private:
	int real;
	int image;
public:
	abc(int r = 0, int i = 0);
	void ShowComplex();
	friend abc Sub(abc& Op);
};

abc::abc(int r, int i) : real(r), image(i)
{
}
void abc::ShowComplex() {
	cout << "(" << real << " + " << image << "i) " << endl;
}
abc Sub(abc& Op) {
	--Op.real;
	--Op.image;
	return Op;
}

void main()
{
	abc x(1, 2), z;
	cout << "함수 호출 전\n";
	x.ShowComplex();
	z.ShowComplex();
	cout << "객체를 1 감소하는 멤버함수 \n";
	z = Sub(x);
	x.ShowComplex();
	z.ShowComplex();
}
*/


// 11번
/*
#include<iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	friend Complex operator-(Complex ob1, Complex ob2);
};

Complex::Complex(int r, int i) : real(r), image(i)
{
}
void Complex::ShowComplex() {
	cout << "(" << real << " + " << image << "i)" << endl;
}
Complex operator-(Complex ob1, Complex ob2)  {
	Complex Result;
	Result.real = ob1.real - ob2.real;
	Result.image = ob1.image - ob2.image;

	return Result;
}

void main()
{
	Complex x(1, 2), y(2, 4), z;
	cout << "--두 Complex 객체에 대한 뺄셈--\n";
	z = x - y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}
*/


// 12번
/*
#include<iostream>
using namespace std;

class myString {
private:
	char data[256];
public:
	myString(const char* str = (char*)'\0') 	{
		strcpy_s(data, str);
	}
	friend ostream& operator<<(ostream& os, const myString& ob);
};

ostream& operator<<(ostream& os, const myString& ob) {
	os << ob.data << endl;

	return os;
}

void main()
{
	myString Astr = "Apple";
	myString Bstr = "Banana";
	cout << Astr << endl;
	cout << Bstr << endl;
}
*/

