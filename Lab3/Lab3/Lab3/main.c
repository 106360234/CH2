#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int heigh, lower, upper, step;
	double weight;
	printf("從多少cm? : ");
	scanf("%d", &lower);
	printf("到多少cm? : ");
	scanf("%d", &upper);
	printf("每隔多少cm? : ");
	scanf("%d", &step);
	for (heigh = lower; heigh <= upper; heigh += step)
	{
		weight = (heigh - 100)*0.9;
		printf("%dcm %.2fkg\n", heigh, weight);
	}
	system("pause");
	return 0;
}