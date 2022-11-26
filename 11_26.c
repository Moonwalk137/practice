#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int main()
{
	srand(time(0));						//生成随机数
	int number = rand() % 100 + 1;		//得到1-100的随机数
	int count = 0;
	int a = 0;
	printf("已经生成了一个1到100之间的数\n");
	do {
		printf("请输入你猜测的数\n");
		scanf("%d", &a);
		count++;						//统计猜测次数
		if (a > number) {
			printf("你猜的数大了\n");
		}
		else if (a < number) {
			printf("你猜的数小了\n");
		}

	} while (a != number);
		printf("恭喜你，用了%d次猜中了答案", count);
	return 0;
}
*/

/*
int main()
{
	int number[100];							//定义一个包含100个数的数组
	int x = 0;
	int count = 0;
	int sum = 0;
	scanf("%d", &x);
	while (x != -1) {							//输入-1表示输入结束
		number[count] = x;						//count表示数组位置 即数组中第几个数 把x写入count对应的数组位置
		sum += x;
		count++;								//位置依次后移
		scanf("%d", &x);
	}
	if (count > 0) {							//count>0即数组内有数据
		int i;
		double avg = sum / count;
		for (i = 0; i < count; i++) {			//通过循环遍历数组
			printf("%d", i);
			if (number[i] > avg) {				//即下标为i的数>平均数
				printf("%d\t", number[i]);
			}
		}
	}
	return 0;
}
*/

/*
int main()
{
	int x = 0;
	scanf("%d", &x);
	int i;
	int isprime = 1;			//用于判断是否为素数
	for (i = 2; i < x; i++) {
		if (x % i == 0) {		//随着i增加，x不断除i，整除即非素数
			isprime = 0;
		}
	}
	if (isprime == 1) {
		printf("是素数");
	}
	else {
		printf("不是素数");
	}
}
*/