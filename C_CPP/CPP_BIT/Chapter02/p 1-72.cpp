// p 1-72.cpp	함수 포인터(2)
// 함수 포인터를 이용한 정렬 프로그램

#include <iostream>
#include <string>
using namespace std;

typedef int (*CFT) (const void*, const void*);		// 비교 함수 포인터 선언

void ssort(void* base, size_t n, size_t sz, CFT comp) {
	for (int gap = n / 2; 0 < gap; gap / 2) {
		for (int i = gap; i < n; i++) {
			for (int j = i - gap; 0 <= j; j -= gap) {
				char* b = static_cast<char*> (base);
				char* pj = b + j * sz;		// &base[j]
				char* pjg = b + (j + gap) * sz;		// &base[j+gap]
				if (cmp(pj, pjg) < 0) {??

				}
			}
		}
	}
}

int main(void)
{

}