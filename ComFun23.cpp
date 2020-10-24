#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool checkNum(int x, int y)
{
	if (x / 100 == y / 100)return true;
	{
		x %= 100;
		y %= 100;
	}
	if (x / 10 == y / 100)return true;
	{
		x %= 10;
		y %= 10;
	}
	if (x == y)return true;

	return false;
}
int main()
{
	long long num[1000] = { 0 };
	long long n, ans = 0;

	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		num[x]++;
	}
	for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			if (checkNum(i,j))
			{
				if (i!=j)
				{
					ans += num[i] * num[j];
				}
				else
				{
					ans += num[i] * (num[i] - 1);
				}
			}
		}
	}
	printf("id special : %lld", ans / 2);

	return 0;
}