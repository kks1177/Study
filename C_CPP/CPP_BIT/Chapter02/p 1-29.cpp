// p 1-29.cpp	배열(2)
// 3x5 배열을 선언하고 모든 요소가 아닌 일부 요소들만 초기화한 후 전체 요소들의 값의 상태를 출력해보는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int i, j;
	int jumsu[3][5] = { {90,80,75},
						{92,70,75,85},
						{95, 88} };

	for (i = 0; i < 3; i++) {
		cout << "[" << i << "번째] 학생의 점수 ---------------" << endl;
		for (j = 0; j < 5; j++)
			cout << "jumsu[" << i << "][" << j << "] = " << jumsu[i][j] << endl;
	}
	return 0;
}
