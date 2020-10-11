#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j, k;
	printf("enter three numbers\n");
	scanf_s("%d%d%d", &i, &j, &k);
	if (i > j&&i > k)
	{
		printf("%d is the largest number\n",i);
	}
	if (j > i&&j > k)
	{
		printf("%d is the largest number\n", j);
	}
	if (k > j&&k > i)
	{
		printf("%d is the largest number\n", k);
	}
	if (i < j&&i < k)
	{
		printf("%d is the smallest number\n", i);
	}
	if (j < i&&j< k)
	{
		printf("%d is the smallest number\n", j);
	}
	if (k < j&&k < j)
	{
		printf("%d is the smallest number\n", k);
	}
	system("pause");
	return 0;
}