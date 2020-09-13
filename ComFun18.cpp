#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float num[10];
	int pctc = 0, ngtc = 0;
	printf("Input number : ");

	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &num[i]);
		
		if (num[i] > 0)
		{
			pctc++;
			
		}
		else if (num[i] < 0)
		{
			ngtc++;
		}
	}
	
	printf("All Positive number : %d", pctc);
	printf("\nAll Negative number : %d", ngtc);

	return 0;
}
