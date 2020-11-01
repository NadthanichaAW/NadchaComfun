#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int row, col, mat1[100][100], mat2[100][100], sum[100][100];
	printf("Enter number of row (between 1 to 100): ");
	scanf("%d", &row);
	printf("Enter number of column (between 1 to 100) : ");
	scanf("%d", &col);

	printf("\nEnter elements of 1st matrix: \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("Enter element a %d%d : ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\nEnter elements of 2nd matrix: \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("Enter element b %d%d : ", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("\nSum of two matrix : \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d  ", sum[i][j]);
			if (j==col-1)
			{
				printf("\n");
			}
		}
	}

	return 0;
}