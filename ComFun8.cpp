#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, num2;
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Please insert the number that is greater or equal zero : ");
		scanf("%d", &num2);
		if (num2 >= 0)
		{
			if (num2 >= 50)
			{
				printf("Pass");
			}
			else
				printf("Fail");
		}
	}
	else if (num >= 0)
	{
		if (num >= 50)
		{
			printf("Pass");
		}
		else
			printf("Fail");
	}
	return 0;
}
