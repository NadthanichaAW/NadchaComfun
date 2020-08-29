#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int money, thb;
	scanf("%d", &money);
	if (money <= 0)
	{
		printf("You dont have money");
	}
	else if (money > 0)
	{
		thb = money * 32.5;
		printf("%d THB", thb);
	}
	return 0;
}

