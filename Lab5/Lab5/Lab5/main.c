#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	float newPop = population;
	float newPop2 = population;
	float sum;
	int year,i;

	printf("%15d%30s%25s\n", "Years from now", "Population (in millions)", "Increase (in million)");

	for (year = 1; year <= 75; year++)
	{
		newPop2 = newPop;
		sum = 1.0;
		for (i = 1; i <= year; i++)
		{
			sum = sum*(1 + rate);
		}
		newPop = population*sum;
		printf("%15d%30.2f%25.2f\n", year, newPop, newPop - newPop2);
	}
	system("pause");
	return 0;
}