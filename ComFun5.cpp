#include <stdio.h>
int main()
{
	int num1, num2, sum;
	printf("Input two number : ");
	scanf_s("%d %d", &num1, &num2);
	sum = num1 + num2;
	if (sum > 0)
	{
		if (sum % 2 == 0)
		{
			printf("Positive Even");
		}
		else
			printf("Positive Odd");
	}
	else if (sum < 0)
	{
		if (sum % 2 == 0)
		{
			printf("Negative Even");
		}
		else
			printf("Negative Odd");
	}
	else if (sum == 0)
	{
		printf("Zero");
	}
	return 0;
}
