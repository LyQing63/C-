#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main4()
{
	int index;
	scanf("%d",&index);
	int unit = index % 10;
	int decade = index / 10 % 10;
	int hundreds = index / 100;
	printf("%d", unit * 100 + decade * 10 + hundreds);
	strlen("abc");


	return 0;
}