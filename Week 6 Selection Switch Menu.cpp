/*Write a program to display a menu on the screen. Your menu should have the following three option.
[A] triangle  [B] Circle  [E] Exit
if user select option A, your program will perform the calculation that find the area of a triangle

if user select option B, your program will perform the calculation that find the area of a circle

if user select option E, Your program will display the exit message*/

#include<stdio.h>
#include<ctype.h>
#define pi 3.142
void main()
{
	char option = ' ';
	int base = 0, height = 0;
	float radius = 0.0, area = 0.0;
	
	printf("[A] Triangle  [B] Circle  [E] Exit\n");
	printf("Enter your choice: ");
	option = getchar();

	switch (toupper(option))
	{
	case 'A':
		{
			printf("\nBase: ");
			scanf_s("%d", &base);
			printf("Height: ");
			scanf_s("%d",&height);
			area = 0.5*height*base;
			printf("\nThe Area of Triangle: %.2f\n\n",area);
		}
		break;
	case 'B':
		{
			printf("\nRadius: ");
			scanf_s("%f", &radius);
			area = pi*radius*radius;
			printf("area: %.2f\n\n", area);
		}
	break;
	default:printf("\nBye bye,See you again ^_^ \n\n");
		break;
	}
}