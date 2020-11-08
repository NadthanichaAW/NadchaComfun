#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	char name[50];
	int roll;
	float marks;
}stu[5];

int main()
{
	printf("Enter information of students: \n\n");
	
	for (int i= 0; i < 5; ++i)
	{
		stu[i].roll = i + 1;
		printf("\nFor roll number %d :\n", stu[i].roll);
		
		printf("Enter name: ");
		scanf("%s", &stu[i].name);

		printf("Enter marks: ");
		scanf("%f", &stu[i].marks);
	}
	printf("\nDisplaying Information: \n\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("\nRoll number: %d\n", i + 1);
		printf("Name: %s\n", stu[i].name);
		printf("Marks: %.2f\n", stu[i].marks);
	}

	return 0;
}