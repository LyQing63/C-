#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main1()
{
	while (1)
	{
		int a;
		char str[1];
		scanf("%d", &a);
		scanf("%c", &str);
		if (str[0] == 'q')
		{
			break;
		}
		if (a < 100 || a>999)
		{
			printf("�������");
		}
		else
		{
			int ones = a % 10;
			int tens = (a % 100) / 10;
			int hundreds = a / 100;
			if (Cubic(ones) + Cubic(tens) + Cubic(hundreds) == a)
			{
				printf("��ˮ�ɻ���");
			}
			else
			{
				printf("����ˮ�ɻ���");
			}
		}
	}
	return 0;
}
int Cubic(num)
{
	int result = num * num * num;
	return result;
}