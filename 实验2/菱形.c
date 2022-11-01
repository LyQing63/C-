#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main4() {

	int row = 0;
	scanf("%d", &row);
	int a = row; //边长
	while (row > 0) { //外循环行
		int column = 1;
		if (row >= (a + 1) / 2) { //上半三角形
			while (column <= a) { //内循环“*”的个数
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
		} else { //下半三角形
			while (column <= a) { //内循环“*”的个数
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