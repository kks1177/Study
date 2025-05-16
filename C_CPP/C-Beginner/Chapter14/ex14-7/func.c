// func.c

#include <stdio.h>

extern int a;

void func()
{
    printf("extern int a값 ==> %d \n", a);
}