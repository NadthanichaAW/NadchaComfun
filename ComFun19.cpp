#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float num[10], sum = 0, sum2 = 0, total, total2;
	int pct = 0, ngt = 0;
	printf("Input number : ");

	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &num[i]);
		if (num[i]>0)
		{
			pct++;
			sum += num[i];
		}
		else if (num[i]<0)
		{
			ngt++;
			sum2 += num[i];
		}
	}
	total = sum / pct;
	total2 = sum2 / ngt;
	printf("All positive number is %d and average is %.2f", pct, total);
	printf("\nAll negative number is %d and average is %.2f ", ngt, total2);


	return 0;
}
