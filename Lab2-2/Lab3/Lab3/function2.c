#include<stdio.h>
#include<stdlib.h>

int  Han_Xin_2(void)
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp, temp2;


	printf("(2) \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (i == 1) || (i == 8) || (i == 2) || (i == 7)
				|| (j == 0) || (j == 9) || (j == 1) || (j == 8) || (j == 2) || (j == 7))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	//-----------------------(2)


	system("pause");
	return 0;
}