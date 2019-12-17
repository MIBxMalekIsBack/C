#include<stdio.h>
void main()
{
	float basic_salary = 0.0, total_salary = 0.0, rate = 0.0;
	int overtime = 0;

	printf("Basic Salary: RM");
	scanf_s("%f", &basic_salary);

	printf("Overtime Hours: ");
	scanf_s("%d", &overtime);

	printf("Rate Per Hours : RM");
	scanf_s("%f", &rate);

	total_salary = basic_salary + (overtime*rate);
	
	printf("salary= RM%0.2f\n\n", total_salary);
}