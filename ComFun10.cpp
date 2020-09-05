#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, i,j;
	printf("Input number : ");
	scanf("%d",&x);
	for ( i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (i==1||j==1||i==x||j==x)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}