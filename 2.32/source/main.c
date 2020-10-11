#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double i, j, BMI;
	printf("enter your height and weight\n");
	scanf_s("%lf%lf", &i, &j);
	i = i / 100;
	BMI = j / i / i;
	printf("BMI=%lf\n", BMI);
	if (BMI < 18.5)
	{
		printf("underweight");
	}
	if (BMI >= 18.5&&BMI <= 24.9)
	{
		printf("normal");
	}
	if (BMI >= 25&&BMI<= 29.9)
	{
		printf("overweight");
	}
	if (BMI>=30)
	{
		printf("obese");
	}
	system("pause");
	return 0;
}