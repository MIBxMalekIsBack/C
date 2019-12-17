/*This is question 7*/
#include <stdio.h>
void main(void)
{
	float size_week1, size_week2;
	float Rate_of_Growth;

	printf("Enter the initial size of the population of first week : ");
	scanf_s("%f", &size_week1);

	printf("Enter the size of the poplation of second week : ");
	scanf_s("%f", &size_week2);

	Rate_of_Growth = (size_week2 - size_week1) / size_week1 * 100;

	printf("The percentage of the rate of growth for the insect population is %0.2f\n.", Rate_of_Growth);
}