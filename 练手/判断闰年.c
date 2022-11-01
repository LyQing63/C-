#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	while (1)
	{
	
		int year;
		char str[1];
		scanf("%c", str);
		if (str[0] == 'q')
		{
			break;
		}
		scanf("%d", &year);
		if (year % 400 != 0 && year % 4 == 0 || year % 400 == 0)
		{
			printf(" «»ÚƒÍ");
		}
	}
	return 0;
}