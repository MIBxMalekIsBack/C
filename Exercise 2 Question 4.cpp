/* This is example 4(a)
#include<stdio.h>
void main(void)
{
	int x;
	printf("Please enter a value: ");
	scanf_s("%d", &x);
		printf("The value that you have entered is %d\n", x);
}*/
/*EXERCISE*/
#include<stdio.h>
void main(void)
{
	int x;
	float price;

	printf("How many eggs you want: ");
	scanf_s("%d", &x);

	price = x*0.25;
	printf("You should pay RM %.2f\n", price);
}