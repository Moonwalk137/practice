#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int mask = 1;
//	int a = 0;
//	scanf("%d", &a);
//	int x = a;										//����aֵ����x���м��㣬��������a
//	while (x  > 9) {								//�ж�xλ��
//		x /= 10;									//xС����ǰ��һλ
//		mask *= 10;
//	}
//	do {
//		int d = x / mask;							//��ȡ���λ����
//		x %= mask;									//ȥ�����λ
//		printf("%d ", d);
//		mask /= 10;
////		printf("x=%d d=%d mask=%d\n", x, d, mask); �������ڵ��� ʵʱ�࿴������ֵ�仯
//	} while (mask > 0);
//	return 0;
//}


//������
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