#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, count = 0;

	printf("Input number : ");
	scanf("%d %d", &num1, &num2);

	if (num1<num2)
	{
		for (int i = num1; i <= num2; i++)
		{
			if (i % 5 == 0)
			{
				printf("(%d) ", i);
				count = count + 1;
			}
			else
			{
				printf("%d ", i);
			}
		}
		printf("\nResult : %d", count);
	}
	else if (num1>num2)
	{
		for (int i = num1; i >= num2; i--)
		{
			if (i % 5 == 0)
			{
				printf("(%d) ", i);
				count = count + 1;
			}
			else
			{
				printf("%d ", i);
			}
		}
		printf("\nResult : %d", count);
	}
	else
	{
		printf("ERROR");
	}

	return 0;
}
