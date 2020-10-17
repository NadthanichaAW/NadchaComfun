#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k, a, b;
	int point[2][10000];

	scanf("%d %d", &n, &k);
	
	point[0][0] = 1;
	for (int j = 1; j <= k; j++)
	{
		point[0][j] = 0;
	}for (int i = 1; i <= n; i++)
	{
		a = i % 2;
		b = (i - 1) % 2;
		for (int j = 0; j <= k; j++)
		{
			point[a][j] = 0;
			for (int h = 1; h <= i; h++)
			{
				if (j - (h - 1) >= 0)
				{
					point[a][j] += point[b][j - (h - 1)];
				}
				else
					break;
				point[a][j] %= 2020;
	
				
			}
		}
	}
	printf("%d", point[n % 2][k]);



	return 0;
}
