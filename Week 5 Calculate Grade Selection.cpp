/*Write a program to accept the student mark. your program is
required to display the grade according to the table below

mark		grade
90-100		A
80-89		B
70-79		C
60-69		D
0-59		F*/

#include<stdio.h.>
void main()
{
	int mark = 0;

	printf("Your mark: ");  
		scanf_s("%d", &mark);

	if (mark >= 90 && mark <= 100)        //&& mean and (dan)
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
					if (mark <= 59 && mark >= 0)
						printf("Your grade is F\n\n");
					else
						if (mark >= 101)
							printf("Invalid mark\n\n");
						else
							printf("Invalid mark\n\n");
}