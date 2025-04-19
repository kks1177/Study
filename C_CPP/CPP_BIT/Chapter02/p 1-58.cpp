// p 1-58.cpp	continue & break
// 0부터 ㅣ작해서 1씩 증가시켜 가면서 짝수만 더하는 프로그램으로, 그 합이 100보다 크게 되면 덧셈을 멈추고 결과를 출력하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 100; i++) {
		if (i % 2)
			continue;
		else if (sum > 100)
			break;
		sum += i;
	}
	cout << "i : " << i << "\t summary : " << sum << endl;

	return 0;
}