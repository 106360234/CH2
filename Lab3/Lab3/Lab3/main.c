#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int heigh, lower, upper, step;
	double weight;
	printf("�q�h��cm? : ");
	scanf("%d", &lower);
	printf("��h��cm? : ");
	scanf("%d", &upper);
	printf("�C�j�h��cm? : ");
	scanf("%d", &step);
	for (heigh = lower; heigh <= upper; heigh += step)
	{
		weight = (heigh - 100)*0.9;
		printf("%dcm %.2fkg\n", heigh, weight);
	}
	system("pause");
	return 0;
}