#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main4() {

	int row = 0;
	scanf("%d", &row);
	int a = row; //�߳�
	while (row > 0) { //��ѭ����
		int column = 1;
		if (row >= (a + 1) / 2) { //�ϰ�������
			while (column <= a) { //��ѭ����*���ĸ���
				if (column >= row - (a - 1) / 2 && column <= (3 * a + 1) / 2 - row ) {
					printf("*");
				}
				else {
					printf(" ");
				}
				column++;
				if (column == a + 1) {
					printf("\n");
				}
			}
		} else { //�°�������
			while (column <= a) { //��ѭ����*���ĸ���
				if (column >= (a + 1) / 2 - row + 1 && column <= (a - 1) / 2 + row) {
					printf("*");
				}
				else {
					printf(" ");
				}
				column++;
				if (column == a + 1) {
					printf("\n");
				}
			}
		}
		row--;
	}
	return 0;
}