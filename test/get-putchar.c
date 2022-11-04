#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	//EOF - end of file 是文件结束标志
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	char password[20] = { 0 }; //password 为指针
	printf("请输入密码:>");
	scanf("%s", password);

	int tmp = 0;
	while ((tmp = getchar()) != '\n') //释放缓冲区
	{
		;
	}

	printf("是否确认密码:>(Y/N)");
	int ch = getchar();
	if ('Y' == ch)
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}