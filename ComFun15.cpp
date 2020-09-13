#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num,count=0;

	scanf("%d", &num);
	if (num > 0)
	{
		for (int i = 0; i <= num; i++)
		{
			count++;
			if (num % count == 0)
			{	
				printf("%d ", count);
			}
		}
	}
	else
		printf("ERROR");
	return 0;
}
