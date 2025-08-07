// 예제 15-3.cpp
// sort() 함수 사용하기

#include <vector>
#include <algorithm>
#include <functional>		// For greater<int>()
#include <iostream>
using namespace std;

void main()
{
	vector<int> v(8);

	vector<int>::iterator start, end, iter;

	for (int i = 0; i < v.size(); i++)
		v[i] = i + 1;

	start = v.begin();
	end = v.end();

	sort(start, end);

	cout << "***벡터 v 내용 출력(오름차순 정렬)***" << endl;
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << "  " << *iter;
	cout << endl;

	sort(start, end, greater<int>());

	cout << "***벡터 v 내용 출력(내림차순 정렬)***" << endl;
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << "  " << *iter;
	cout << endl;
}