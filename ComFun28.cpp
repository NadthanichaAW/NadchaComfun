#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	void enterData(int firstMat[][10], int secondMat[][10], int rowFirst, int colFirst, int rowSecond, int colSecond);
	void multiplyMatrices(int firstMat[][10], int secondMat[][10], int mult[][10], int rowFirst, int colFirst, int rowSecond, int colSecond);
	void display(int mult[][10], int rowFirst, int colSecond);

int main()
{
	int firstMat[10][10], secondMat[10][10], mult[10][10], rowFirst, colFirst, rowSecond, colSecond, i, j, k;

	printf("Enter row and column for first Matrix : ");
	scanf("%d %d", &rowFirst, &colFirst);
	printf("Enter row and column for second Matrix : ");
	scanf("%d %d", &rowSecond, &colSecond);

	while (colFirst != rowSecond)
	{
		printf("\nError! column of first matrix not equal to row of second.\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d %d", &rowFirst, &colFirst);
		printf("Enter rows and column for second matrix: ");
		scanf("%d %d", &rowSecond, &colSecond);
	}
	enterData(firstMat, secondMat, rowFirst, colFirst, rowSecond, colSecond);
	multiplyMatrices(firstMat, secondMat, mult, rowFirst, colFirst, rowSecond, colSecond);
	display(mult, rowFirst, colSecond);
	return 0;
}

void enterData(int firstMat[][10], int secondMat[][10], int rowFirst, int colFirst, int rowSecond, int colSecond)
{
	int i, j;
	printf("\nEnter elements of matrix 1 : \n");
	for ( i = 0; i < rowFirst; i++)
	{
		for (j = 0; j < colFirst; j++)
		{
			printf("Enter elements a%d%d : ", i + 1, j + 1);
			scanf("%d", &firstMat[i][j]);
		}
	}
	printf("\nEnter elements of matrix 2:\n");
	for (i = 0; i < rowSecond; ++i)
	{
		for (j = 0; j < colSecond; ++j)
		{
			printf("Enter elements b%d%d : ", i + 1, j + 1);
			scanf("%d", &secondMat[i][j]);
		}
	}

}
void multiplyMatrices(int firstMat[][10], int secondMat[][10], int mult[][10], int rowFirst, int colFirst, int rowSecond, int colSecond)
{
	int i, j, k;
	for ( i = 0; i < rowFirst; i++)
	{
		for ( j = 0; j < colSecond; j++)
		{
			mult[i][j] = 0;
		}
	}
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < colSecond; ++j)
		{
			for (k = 0; k < colFirst; ++k)
			{
				mult[i][j] += firstMat[i][k] * secondMat[k][j];
			}
		}
	}
}

void display(int mult[][10], int rowFirst, int colSecond)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < colSecond; ++j)
		{
			printf("%d  ", mult[i][j]);
			if (j == colSecond - 1)
				printf("\n\n");
		}
	}
}
