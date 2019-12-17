#include<stdio.h>
void summation();  //  function prototype (declaration);void means no return value

int sum = 0;      //  global variable


void main()
{
	int num1 = 0, num2 = 0; // local variable
	
	printf("Enter the first number : ");
	scanf_s("%d", &num1);
	printf("Enter the second number : ");
	scanf_s("%d", &num2);

	summation();   //  function call (activate the function)

	printf("The total is %d\n", sum);
}

void summation()    //  function definition (actual coding part)
{
	int num1 = 1000, num2 = 2000;
	sum = num1 + num2;
}