#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main1()
{
	//如果case没有break将会一直向下执行case的语句
	//1~5输出工作日
	//6~7输出休息日
	int n = 0;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入格式错误\n");
	}

	return 0;
}