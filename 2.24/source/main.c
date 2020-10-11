#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	printf("enter a number\n");
	scanf_s("%d",&i);
	if (i%2 == 0)
	{
		printf("%d is even",i);
	}
	else
	{
		printf("%d is odd",i);
	}
	system("pause");
	return 0;
}