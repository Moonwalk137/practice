#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int h = 1;								//定义列和行
	int l = 1;
	do {
		int x = l * h;						
		if (l == h) {						
			printf("%d*%d=%d", l, h, x);
			printf("\n");
			h++;
			l = 1;
		}
		if (l < h&&h<n+1) {
			printf("%d*%d=%d", l, h, x);
			if (x/10<1) {
				printf("   ");
			}
			else {
				printf("  ");
			}
			l++;
		}
	} while (h <10);
	return 0;
}