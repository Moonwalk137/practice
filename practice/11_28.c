#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int mask = 1;
//	int a = 0;
//	scanf("%d", &a);
//	int x = a;										//复制a值，用x进行计算，避免消耗a
//	while (x  > 9) {								//判断x位数
//		x /= 10;									//x小数点前移一位
//		mask *= 10;
//	}
//	do {
//		int d = x / mask;							//获取最高位数字
//		x %= mask;									//去掉最高位
//		printf("%d ", d);
//		mask /= 10;
////		printf("x=%d d=%d mask=%d\n", x, d, mask); 本句用于调试 实时监看各项数值变化
//	} while (mask > 0);
//	return 0;
//}


//整数集
//int main()
//{
//	int a = 0;
//	int i, j, k;
//	int cnt = 0;
//	scanf("%d", &a);
//	for (i = a; i<=a+3; i++) {
//		for (j = a; j <= a + 3; j++) {
//			for (k = a; k <= a + 3; k++) {
//				if (i != j && i != k && j != k) {
//					cnt++;
//					printf("%d%d%d", i, j, k);
//					if (cnt == 6) {
//						printf("\n");
//						cnt = 0;
//					}
//					else {
//						printf(" ");
//					}
//				}
//			}
//		}
//	}
//}


//int main ()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i;
//	int first = 1;
//	int d;
//	for (i = 1; i < n; i++) {
//		first *= 10;
//	//	printf("%d", first);
//	}
//	for (i = first; i < first * 10; i++) {
//		int x = i;
//		int sum=0;
//		do {
//			d = x % 10;
//			x /= 10;
//			int p;
//			int j=1;
//			for (p = 0; p < n; p++) {
//				j *= d;
//			}
//			sum += j;
//		} while (x > 0);
//		if (sum == i) {
//			printf("%d\n", i);
//		}
// 	}
//	return 0;
//}