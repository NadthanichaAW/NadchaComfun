#include<stdio.h>
int main()
{
	int n,a,b,c,B,C;
	printf("Enter money : ");
	scanf("%d",&n);
	printf("\n\nTotal bank note \n");

	if(n<=20000)	
	{
		a=n/1000;
		printf("Banknote 1000 : %d\n",a);
		B=n%1000;
		b=B/500;
		printf("Banknote 500 : %d\n",b);
		C=B%500;
		c=C/100;
		printf("Banknote 100 : %d\n",c);	
	}
	else 
		printf("Sorry your money is over ");
	//eiei
	return 0;
}
