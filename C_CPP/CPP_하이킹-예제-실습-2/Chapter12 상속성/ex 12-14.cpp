// ex 12-14.cpp
// 추상 클래스와 다형성 이용하기

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
void CommonPrn(Shape* ptr) {		// 추상클래스로 포인터 변수 선언
	ptr->Draw();
}

/* 메인함수 */
int main()
{
	// Shape obj;

	CommonPrn(new Rect);
	CommonPrn(new Circle);
}

/* 함수 정의부 */

