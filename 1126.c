//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void jiaohuan()
{
	printf("������A�е����ݺ�����B�е����ݽ��н�����������һ����\n");
	int a[10] = { 0 };
	int b[10] = { 0 };
	printf("��Ϊ����a��ֵ\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("��Ϊ����b��ֵ\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
}
void jisuan()
{
	printf(" ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��\n");
	int sum = 0;
	for (int i = 1; i < 101; i++)
	{
		if (0!=1%i)
		{
			sum +=( 1 % i);
		}
		else
		{
			sum - +(1 % i);
		}
	}
	printf("%d\n", sum);
}
void shushu()
{
	printf("  ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��\n");
	int count = 0;
	for (int i = 1; i < 101; i++)
	{
		if (9 == i % 10)
		{
			count++;
		}
		if (9 == i / 10)
		{
			count++;
		}
	}
	printf("%d\n", count);
}
int main()
{
	jiaohuan();
	jisuan();
	shushu();
	system("pause");
	return 0;
}