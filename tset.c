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
	c = (a / 100 * 60) + a % 100 + b;		//�����ʱ��ת��Ϊ���ӣ������мӼ�
	if (c > 1440) {							//�ж�ʱ��ǰ���Ƿ����һ�죨24*60=1440��
		d = c / 1440;
		c = c % 1440;						//ȡ���õ�ǰ��ʱ��ķ���������ȥ��ǰ��������
		c = c / 60 * 100 + c % 60;			//�ӷ�����ת��Ϊ��λ��ʱ��ı�ʾ
		printf("ʱ��Ϊ%d����", d);
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
		printf("ʱ��Ϊ%d��ǰ��", d);
		printf("%03d", c);
	}
	return 0;
}

