#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, x = 2;
	printf("Enter number : ");
	scanf("%d", &num);
	if (num == 0 || num == 2 || num == 3 || num == 5 || num == 7)
	{
		printf("Factoring Result : DONT HAVE FACTORING");
	}
	else if (num < 0)
	{
		printf("Factoring Result : DONT HAVE FACTORING");
	}
	else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
	{
		printf("Factoring Result : ");
		while (num != 1)
		{
			while (num % x == 0)
			{
				num = num / x;
				printf("%d ",x);
				if (num == 1)break;
				printf("x ");
			}
			x++;
		}
	}
	else if (num % x != 0)
	{
		printf("Factoring Result : DONT HAVE FACTORING");
	}
	return 0;
}
