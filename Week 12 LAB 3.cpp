#include<stdio.h>
void summation(int num1 , int num2);  //  function prototype (declaration);void means no return value

int sum = 0;      //  global variable


void main()
{
	int num1 = 0, num2 = 0; // local variable

	printf("Enter the first number : ");
	scanf_s("%d", &num1);
	printf("Enter the second number : ");
	scanf_s("%d", &num2);

	summation(num1,num2);   //  function call (activate the function)

	printf("The total is %d\n", sum);
}

void summation(int num1 , int num2)    //  function definition (actual coding part)
{
	
	sum = num1 + num2;
}