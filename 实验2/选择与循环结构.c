#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int judge(double a, double b, double c) {
	if (a + b > c && fabs(a - b) < c) {
		return 1;
	}
	else {
		return 0;
	}
}
int rightAngle(double a, double b, double c) {
	if (pow(a, 2) + pow(b, 2) - pow(c, 2) <= 1e-2 || pow(c, 2) + pow(b, 2) - pow(a, 2) <= 1e-2 || pow(a, 2) + pow(c, 2) - pow(b, 2) <= 1e-2) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	double a, b, c;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0) {
		if (judge(a, b, c) == 1) {
			char type[10] = "";
			if (a == b || b == c || a == c) {
				strcat(type, "����");
			}
			if (rightAngle(a,b,c)){
				strcat(type, "ֱ��");
			};
			if (type[0] == '\0') {
				printf("��������������");
			} else {
				printf("��%s������", type);
			}
		}
		else {
			printf("���ܹ���������");
		}
	}
	else {
		printf("��ʽ�������");
	}

	return 0;
}