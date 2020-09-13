#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);

	if (num > 2)
	{
		if (num % 2 == 0)
		{
			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num - 1; j++)
				{
					if (i + j == num / 2 - 1 || i - j == num / 2 || j - i == num / 2 - 1 || i + j == 3 * (num / 2) - 2)
					{
						printf("*");
					}
					else
						printf("-");
				}
				printf("\n");
			}
		}
		else
		{
			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num; j++)
				{
					if (i + j == num / 2 || j - i == num / 2 || i - j == num / 2 || i + j == 3 * num / 2 - 1)
					{
						printf("*");
					}
					else
						printf("-");
				}
				printf("\n");
			}
		}
	}
	else
		printf("ERROR");
	return 0;
}
