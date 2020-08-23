#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Input three number : ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a == 0 || b == 0 || c == 0)
	{
		if (a != 0 || b == 0 || c == 0)
		{
			if (b != 0 && c == 0)
			{
				if (a == 0 && b != 0 && c == 0)
				{
					printf("\nDont Have Mathematical definition");
				}
				else if (a % b == 0)
				{
					printf("a can be divided by b");
				}
				else
					printf("b and c cannot be a denorminator");
			}
			else if (b == 0 && c != 0)
			{
				if (a == 0 && b == 0 && c != 0)
				{
					printf("Dont Have Mathematical definition");
				}
				else if (a % c == 0)
				{
					printf("a can be divided by c");
				}
				else
					printf("b and c cannot be a denorminator");
			}
			else
				printf("b and c cannot be a denorminator");
		}
		else
			printf("Dont Have Mathematical definition");
	}
	else if (a != 0 || b != 0 || c != 0)
	{
		if (a % b == 0 || a % c == 0)
		{
			if (a % b == 0 && a % c != 0)
			{
				printf("a can be divided by b");
			}
			else if (a % c == 0 && a % b != 0)
			{
				printf("a can be divided by c");
			}
			else
				printf("a can be divided by b and c");
		}
		else
			printf("a can not be divided by b and c");
	}
	return 0;
}
