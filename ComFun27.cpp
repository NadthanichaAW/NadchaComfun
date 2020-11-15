#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getMatrix(int matrix[][10], int row, int column)
{
	printf("\nEnter elements: \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("Enter a%d%d : ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
}
void multipleMat(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2)
{
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			result[i][j] = 0;
		}
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			for (int k = 0; k < c1; k++)
			{
				result[i][j] += first[i][k] * second[k][j];

			}
		}
	}
}
void display(int result[][10], int row, int column)
{
	printf("\nOutput Matrix: \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d ", result[i][j]);
			if (j == column - 1)
			{
				printf("\n");
			}
		}
	}
}
int main()
{
	int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;

	printf("Enter row and column first matrix : ");
	scanf("%d %d", &r1, &c1);
	printf("Enter row and column second matrix : ");
	scanf("%d %d", &r2, &c2);

	while (c1 != r2)
	{
		printf("Error! Enter rows and columns again.\n");
		printf("Enter row and columns  first matrix : ");
		scanf("%d %d", &r1, &c1);
		printf("Enter row and columns second matrix : ");
		scanf("%d %d", &r2, &c2);
	}
	getMatrix(first, r1, c1);
	getMatrix(second, r2, c2);
	multipleMat(first, second, result, r1, c1, r2, c2);
	display(result, r1, c2);

	return 0;
}