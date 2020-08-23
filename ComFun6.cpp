#include <stdio.h>
int main()
{
	int x, y, age, a;
	printf("Input year : ");
	scanf_s("%d", &x);

	if (x > 2020) {
		printf("\nPlease insert in C.E format : ");
		scanf_s("%d", &y);
		age = 2020 - y;
		printf("Age : %d\n", age);
	}
	else {

		age = 2020 - x;
		printf("Age : %d\n", age);
	}
	printf("Goodbye !");
	return 0;
}