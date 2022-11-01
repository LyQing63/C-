#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main2()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	int index = a;
	a = b;
	b = index;
	return 0;
}
