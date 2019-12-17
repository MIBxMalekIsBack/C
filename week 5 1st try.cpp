#include<stdio.h>
void main()
{
	int number1 = 0, number2 = 0;

	printf("Enter the first number : ");
	scanf_s("%d", &number1);

	printf("Enter the second number : ");
	scanf_s("%d", &number2);

	if (number1 == number2)
		printf("There are the same !!\n\n");
	else
		printf("There are not equal\n\n");
	printf("bye bye !!\n\n");
}
