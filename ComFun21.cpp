#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int size;
	printf("Input the size of the square: ");
	scanf("%d", &size);

	if (size > 1)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				printf(" *");
			}
			printf("\n");
		}
	}
	else
		printf("Can not creat the square");





	return 0;
}
