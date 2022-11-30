#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);						//获取乘法表范围
	int h = 1;								//定义行和列
	int l = 1;
	do {
		int x = l * h;						
		if (l == h) {						
			printf("%d*%d=%d", l, h, x);
			printf("\n");
			h++;
			l = 1;							//换行后重置列数
		}
		if (l < h&&h<n+1) {					//限制乘法表范围
			printf("%d*%d=%d", l, h, x);
			if (x/10<1) {					//当输出个位数时
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
