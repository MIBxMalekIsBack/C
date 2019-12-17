#include<stdio.h>
void subtraction(); // function prototype

int result = 0;  //global variable

void main()
{
	int num1 = 0, num2 = 0;  //local variable

	subtraction();   //call function
	printf("%d + %d = %d", num1, num2, result);

}

void subtraction() //function definition
{
	int num1 = 0, num2 = 0;  //local variable

	printf("Enter the first number: ");
	scanf_s("%d", &num1);

	printf("Enter the second number: ");
	scanf_s("%d", &num2);

	result = num1 - num2;

	printf("The answer for %d - %d is %d.\n\n", num1, num2, result);
}