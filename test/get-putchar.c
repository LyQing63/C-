#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	//EOF - end of file ���ļ�������־
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	char password[20] = { 0 }; //password Ϊָ��
	printf("����������:>");
	scanf("%s", password);

	int tmp = 0;
	while ((tmp = getchar()) != '\n') //�ͷŻ�����
	{
		;
	}

	printf("�Ƿ�ȷ������:>(Y/N)");
	int ch = getchar();
	if ('Y' == ch)
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}