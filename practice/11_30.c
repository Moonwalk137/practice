#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int m, n;
	int cnt=0;
	scanf("%d %d", &m, &n);
	if (m == 1) {
		m = 2;
	}
	int i;
	int x;
	int sum=0;
	for (x = m; x <=n; x++) {
		int isprime = 1;
		for (i = 2; i < x-1; i++)
		{
			if (x % i == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime) {
			//printf("%d ", x);
			cnt++;
			sum += x;
		}
	}
	printf("%d %d", cnt, sum);
	return 0;
}
