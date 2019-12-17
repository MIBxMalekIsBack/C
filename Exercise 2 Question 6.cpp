#include<stdio.h>
void main(void)
{
	char name[50];
	int yearofborn;
	int age;

	printf("What is your name: ");
	gets_s(name);

	printf("Please enter your year of birth:  ");
	scanf_s("%d", &yearofborn);

	age = 2016 - yearofborn;
	printf("\nHi %s,your age is %d this year.\n\n", name, age);

}