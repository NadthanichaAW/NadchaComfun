#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	
	int num[3],num2[3];
	char name[4];
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);			
	}
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3 ; i++)
	{
		scanf("%s",&name[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		num2[i] = name[i] - 65;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", num[num2[i]]);
	}
	
	return 0;

}
