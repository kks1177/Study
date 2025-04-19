// 예제 12-13.cpp
// 추상 클래스와 완전 가상함수를 이용해서 사각형과 원 클래스 설계하기

#include <iostream>
using namespace std;

class Shape {
protected:
	double area;
public:
	virtual void Draw() = 0;		// 완전 가상 함수
	virtual double GetSize() = 0;	// 완전 가상 함수
};

class Rect : public Shape {
protected:
	int width;
	int height;
public:
	Rect(int w = 0, int h = 0);
	void Draw();		// 오버라이딩
	double GetSize();	// 오버라이딩
};

Rect::Rect(int w, int h) {
	width = w;
	height = h;
}
void Rect::Draw() {		// 오버라이딩
	cout << "사각형을 그린다." << endl;
}
double Rect::GetSize() {	// 오버라이딩
	area = width * height;
	return area;
}

class Circle : public Shape {
protected:
	int radius;
public:
	Circle(int r = 0);
	void Draw();		// 오버라이딩
	double GetSize();	// 오버라이딩
};

Circle::Circle(int r) {
	radius = r;
}
void Circle::Draw() {		// 오버라이딩
	cout << "원을 그린다." << endl;
}
double Circle::GetSize() {	// 오버라이딩
	area = radius * radius * 3.14;
	return area;
}

void main()
{
	Rect recObj(8, 10);
	recObj.Draw();
	cout << "사각형의 면적 : " << recObj.GetSize() << endl;

	Circle cirObj(5);
	cirObj.Draw();
	cout << "원의 면적 : " << cirObj.GetSize() << endl;
}
