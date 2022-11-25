#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	c = (a / 100 * 60) + a % 100 + b;		//输入的时间转换为分钟，并进行加减
	if (c > 1440) {					//判断时间前进是否大于一天（24*60=1440）
		d = c / 1440;
		c = c % 1440;				//取余后得到前进时间的分钟数（取余去除前进天数）
		c = c / 60 * 100 + c % 60;		//从分钟再转换为四位数时间的表示
		printf("时间为%d天后的", d);
		printf("%03d", c);
}
	else if (c > 0 && c < 1440)
	{
		c = c / 60 * 100 + c % 60;
		printf("%03d", c);
	}
	else if (c > -1440 && c < 0)
	{
		c = 24 * 60 + c;
		c = c / 60 * 100 + c % 60;
		printf("%03d", c);
	}
	else 
	{
		d = c / 1440;
		c = c % 1440;
		c = 24 * 60 + c;
		c = c / 60 * 100 + c % 60;
		printf("时间为%d天前的", d);
		printf("%03d", c);
	}
	return 0;
}

//代码来源于翁凯老师的题目并加以修改，要求为输入一个四位数字代表小时分钟，再输入一个数字表示度过的时间（单位分钟，可为负数）
