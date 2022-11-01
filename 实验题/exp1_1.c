#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main1()
{
	int a;
	int b;
	scanf("%d, %d",&a,&b);
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	double quotient = a / b;
	double ave = sum / 2;
	printf("sum = %d,difference = %d,product = %d, quotient = %lf,ave = %lf",sum,difference,product,quotient,ave);
	printf("ave = %lf",ave);
	return 0;
}