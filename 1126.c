//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void jiaohuan()
{
	printf("将数组A中的内容和数组B中的内容进行交换。（数组一样大）\n");
	int a[10] = { 0 };
	int b[10] = { 0 };
	printf("请为数组a赋值\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请为数组b赋值\n");
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
	printf(" 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。\n");
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
	printf("  编写程序数一下 1到 100 的所有整数中出现多少次数字9。\n");
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