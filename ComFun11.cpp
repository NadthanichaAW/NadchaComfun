#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c,sum;
	printf("Input A and B : ");
	scanf("%f %f", &a, &b);

	if(a>0||b>0)
	{
		if (a>0&&b>0&&a!=b&&a!=0&&b!=0)
		{
			c = pow(a, 2) + pow(b, 2);
			sum = sqrt(c);
			printf("C is %.2f",sum);
		}
		else if (a>0||b>0||a!= b && a == 0 || b == 0)
		{
			printf("Plz input A and B again : ");
			scanf("%f %f", &a, &b);
			c = pow(a, 2) + pow(b, 2);
			sum = sqrt(c);
			printf("C is %.2f", sum);

		}
		else if (a==b)
		{
			printf("Plz input A and B again : ");
			scanf("%f %f", &a, &b);
			c = pow(a, 2) + pow(b, 2);
			sum = sqrt(c);
			printf("C is %.2f",sum);

		}
	}else if (a<0&&b<0)
	{

		printf("Input A and B again : ");
		scanf("%f %f", &a, &b);
		c = pow(a, 2) + pow(b, 2);
		sum = sqrt(c);
		printf("C is %.2f", sum);

	}
	return 0;
}

