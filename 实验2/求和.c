#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main3() {

	double n, i, j;
	i = 1;
	j = 2;
	double s = 0;
	int sign = 1;
	scanf("%lf", &n);
	while (n > 0) {
		s += sign * (j / i);
		n--;
		double index = j;
		j += i;
		i = index;
		sign *= -1;
	}
	printf("%lf", s);

	return 0;
}