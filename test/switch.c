#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main1()
{
	//���caseû��break����һֱ����ִ��case�����
	//1~5���������
	//6~7�����Ϣ��
	int n = 0;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�����ʽ����\n");
	}

	return 0;
}