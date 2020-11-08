#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int convert(long long n)
{
	int decimalNum = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNum += remainder * pow(2, i);
		i++;
	}
	return decimalNum;
}

int main()
{	
	long long n;

	printf("Enter binary : ");
	scanf("%lld", &n);
	printf("In Decimal  : %d ", convert(n));

	return 0;
}
