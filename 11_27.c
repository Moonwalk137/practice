#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
	int x = 2;
	int i = 0;
	int isprimr = 1;
	for (x = 2; x <= 100; x++) {		//遍历x
		for (i = 2; i < x; i++) {		//遍历i，并与x取余
			if (x % i == 0) {
				isprimr = 0;			
				break;					//跳出循环，计算下一个x
			}
			isprimr = 1;
		}
		if (isprimr == 1) {
			printf("%d\t", x);
		}
	}
}
*/

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i;
	double sum = 0.0;
	double sign = 1.0;
	for (i = 1; i <= n; i++) {
		sum += sign / i;
		sign = -sign;
	}
	printf("%f", sum);
	return 0;
}
*/


/*
int main()
{
	int a = 0;
	int b = 0;
	int t = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (b == 0) {
		printf("最大公约数为%d", a);
	}
	else {
		while (b != 0) {
			t = a % b;
			a = b;
			b = t;

		}
	}
	printf("最大公约数为%d", a);
	return 0;
}
*/
