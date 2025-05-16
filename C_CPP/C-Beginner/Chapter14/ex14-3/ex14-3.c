// ex14-3.c
// 사용자 정의 헤더 파일 사용 예

#include <stdio.h>
#include "myHeader.h"

int main()
{
    func(10);
}

void func(int num)
{
    printf("%d \n", num);
}