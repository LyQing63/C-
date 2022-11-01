#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	system("cls");
	char arr[] = "hello\0";
	for (int i = 0; i < sizeof(arr); i++)
	{
		printf("%c",arr[i]);
	}
	getchar();
	return 0;

}