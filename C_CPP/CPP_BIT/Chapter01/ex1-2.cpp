// ex1-2.cpp
// 편의성 제공 - 태그 명을 형식 명으로 사용한 예

#include <iostream>
using namespace std;

enum Gender { FEMALE, MALE };

struct StuInfo {
	int num;
	string name;
};

int main()
{
	Gender g = MALE;					// 태그 명인 Gender를 형식 명으로 사용
	StuInfo si = { 2, "홍길동" };		// 태그 명인 StuInfo를 형식 명으로 사용
	return 0;
}
