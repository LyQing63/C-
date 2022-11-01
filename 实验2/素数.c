#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int isPrime(int n) {	//返回1表示判断为质数，0为非质数，在此没有进行输入异常检测
	float n_sqrt;
	if (n == 1) return 0;
	if (n == 2 || n == 3) return 1;
	if (n % 6 != 1 && n % 6 != 5) return 0;
	n_sqrt = floor(sqrt((float)n));
	for (int i = 5; i <= n_sqrt; i += 6)
	{
		if (n % (i) == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}
int main2() {
	int a, b, n,k;
	k = 1;
	n = 0;
	int num[5];
	while (k) {
		scanf("%d, %d", &a, &b);
		if (k) {
			printf("请重新输入");
		}
	}
		while (a <= b) {
			if (isPrime(a)) {
				num[n] = a;
				n++;
				k = 0;
			}
			if (n == 5) {
				for (n; n > 0; n--) {
					printf("%d\t", num[5 - n]);
				}
				printf("\n");
			}
			if (a == b && n < 5 && n > 0) {
				for (int i = 0; i < n; i++) {
					printf("%d\t", num[i]);
				}
			}
			a++;
			if (n == -1) {
				n = 0;
			}
		}

}