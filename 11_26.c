#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int main()
{
	srand(time(0));						//���������
	int number = rand() % 100 + 1;		//�õ�1-100�������
	int count = 0;
	int a = 0;
	printf("�Ѿ�������һ��1��100֮�����\n");
	do {
		printf("��������²����\n");
		scanf("%d", &a);
		count++;						//ͳ�Ʋ²����
		if (a > number) {
			printf("��µ�������\n");
		}
		else if (a < number) {
			printf("��µ���С��\n");
		}

	} while (a != number);
		printf("��ϲ�㣬����%d�β����˴�", count);
	return 0;
}
*/

/*
int main()
{
	int number[100];							//����һ������100����������
	int x = 0;
	int count = 0;
	int sum = 0;
	scanf("%d", &x);
	while (x != -1) {							//����-1��ʾ�������
		number[count] = x;						//count��ʾ����λ�� �������еڼ����� ��xд��count��Ӧ������λ��
		sum += x;
		count++;								//λ�����κ���
		scanf("%d", &x);
	}
	if (count > 0) {							//count>0��������������
		int i;
		double avg = sum / count;
		for (i = 0; i < count; i++) {			//ͨ��ѭ����������
			printf("%d", i);
			if (number[i] > avg) {				//���±�Ϊi����>ƽ����
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
	int isprime = 1;			//�����ж��Ƿ�Ϊ����
	for (i = 2; i < x; i++) {
		if (x % i == 0) {		//����i���ӣ�x���ϳ�i��������������
			isprime = 0;
		}
	}
	if (isprime == 1) {
		printf("������");
	}
	else {
		printf("��������");
	}
}
*/