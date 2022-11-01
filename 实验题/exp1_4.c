#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define pi 3.14;

int main3()
{
	float radius, height;
	scanf("%f,%f" ,&radius, &height);
	float area = radius * radius * height * pi;
	printf("area = %.2f",area);

	return 0;
}