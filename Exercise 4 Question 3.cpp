#include<stdio.h>
void main()
{
	float salary = 0.0, tax = 0.0, a = 0;

	printf("Salary: ");
	scanf_s("%f", &salary);

	if (salary >= 0 && salary <= 14999)
	{
		a = (salary - 0)*0.15;
		tax = a + 0;
		printf("Your tax is RM%.2f\n\n", tax);
	}
	else
		if (salary >= 15000 && salary <= 29999)
		{
			a = (salary - 15000)*0.18;
			tax = a + 2250;
			printf("Your tax is RM%.2f\n\n", tax);
		}
		else
			if (salary >= 30000 && salary <= 49999)
			{
				a = (salary - 30000)*0.22;
				tax = a + 5400;
				printf("Your tax is RM%.2f\n\n", tax);
			}
			else
				if (salary >= 50000 && salary <= 79999)
				{
					a = (salary - 50000)*0.27;
					tax = a + 11000;
					printf("Your tax is RM%.2f\n\n", tax);
				}
				else
					if (salary >= 80000 && salary <= 150000)
					{
						a = (salary - 80000)*0.33;
						tax = a + 21600;
						printf("Your tax is RM%.2f\n\n", tax);
					}
					else
						printf("Invalid !!\n\n");
}