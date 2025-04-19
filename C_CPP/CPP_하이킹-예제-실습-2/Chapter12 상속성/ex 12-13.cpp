// ex 12-13.cpp
// 추상 클래스와 완전 가상함수를 이용해서 사각형과 원 클래스 설계하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 추상클래스 (상속을 위한 기반클래스)
class Shape {
protected:
	double area;
public:
	virtual void Draw() = 0;				// 완전 가상함수
	virtual double getSize() = 0;		// 완전 가상함수
};
/* 클래스 멤버함수(메소드) 선언부 */

// 파생클래스1
class Rect : public Shape {
protected:
	int width;
	int height;
public:
	Rect(int w = 0, int h = 0);
	void Draw();				// 오버라이딩
	double getSize();		// 오버라이딩
};
Rect::Rect(int w, int h) : width(w), height(h) { }
void Rect::Draw() {				// 오버라이딩
	cout << " 사각형을 그린다. " << endl;
}
double Rect::getSize() {		// 오버라이딩
	area = width * height;
	return area;
}

class Circle : public Shape {
protected:
	int radius;
public:
	Circle(int r = 0);
	void Draw();				// 오버라이딩
	double getSize();		// 오버라이딩
};
Circle::Circle(int r) : radius(r) { }
void Circle::Draw() {				// 오버라이딩
	cout << " 원을 그린다. " << endl;
}
double Circle::getSize() {		// 오버라이딩
	area = radius * radius * 3.14;
	return area;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Rect recObj(8, 10);
	recObj.Draw();
	cout << " 사각형의 면적 : " << recObj.getSize() << endl;

	Circle cirObj(5);
	cirObj.Draw();
	cout << " 원의 면적 : " << cirObj.getSize() << endl;
}

/* 함수 정의부 */

