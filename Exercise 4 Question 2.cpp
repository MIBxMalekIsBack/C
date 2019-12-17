#include<stdio.h>
void main()
{
	int age = 0;
	
	printf("Age: ");
	scanf_s("%d", &age);

	if (age == 0)
		printf("Educational Level = None\n\n");
	else
		if (age >= 1 && age <= 5)
			printf("Educational Level = Elementary\n\n");
		else
			if (age >= 6 && age <= 8)
				printf("Educational Level = Middle School\n\n");
			else
				if (age >= 9 && age <= 12)
					printf("Educational Level = High School\n\n");
				else
					if (age >= 12)
						printf("Educational Level = College\n\n");
					else
						printf("INVALID AGE!!\n\n");
}