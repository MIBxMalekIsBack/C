/*#include<stdio.h.>
void main()
{
	int mark = 0;

	printf("Your mark: ");  //&& mean and(dan)
	scanf_s("%d", &mark);

	if (mark >= 0 && mark <= 100)
	{
		if (mark >= 90 && mark <= 100)
			printf("Your grade is A\n\n");
		else
			if (mark >= 80 && mark <= 89)
				printf("Your grade is B\n\n");
			else
				if (mark >= 70 && mark <= 79)
					printf("Your grade is C\n\n");
				else
					if (mark >= 60 && mark <= 69)
						printf("Your grade is D\n\n");
					else
						printf("Your grade is F\n\n");
	}
	else
		printf("Invalid mark\n\n");
}*/
#include<stdio.h.>
void main()
{
	int mark = 0;

	printf("Your mark: ");  //&& mean and(dan)
	scanf_s("%d", &mark);

	if (mark < 0 || mark > 100)
		printf("Invalid mark\n\n");
	else
	{
		if (mark >= 90 && mark <= 100)
			printf("Your grade is A\n\n");
		else
			if (mark >= 80 && mark <= 89)
				printf("Your grade is B\n\n");
			else
				if (mark >= 70 && mark <= 79)
					printf("Your grade is C\n\n");
				else
					if (mark >= 60 && mark <= 69)
						printf("Your grade is D\n\n");
					else
						printf("Your grade is F\n\n");
	}

}