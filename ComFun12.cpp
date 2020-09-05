#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float x, y,sum;
	printf(" ");
	scanf("%f %f", &x, &y);

	if (x>0&&y>0&&y>x)
	{	
			sum = y / x;
			printf("%2.f", sum);			
	}
	else
	{
		printf("ERROR");
	}

	return 0;
}