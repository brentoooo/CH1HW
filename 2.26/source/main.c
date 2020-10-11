#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	printf("enter two numbers\n");
	scanf_s("%d%d", &i,&j);
	if (i % j == 0)
	{
		printf("%d is a multiple of  %d", i,j);
	}
	else
	{
		printf("%d is not a multiple of the second %d", i, j);
	}
	system("pause");
	return 0;
}