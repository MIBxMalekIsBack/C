#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pi 3.142

void calculation();
void menu();

char option = ' ';
float radius = 0.0, area = 0.0, base = 0, height = 0, width = 0, length = 0;

void main()
{

	menu();
	printf("Enter your choice: ");
	option = getchar();

	calculation();
}
void menu()
{
	printf("1. Calculate The Area Of Circle\n");
	printf("2. Calculate The Area Of Rectangle\n");
	printf("3. Calculate The Area Of Square\n");
	printf("4. Calculate The Area Of Hexagon\n");
	printf("5. Calculate The Area Of Triangle\n");
	printf("6. Exit\n\n");
}

void calculation()
{
	switch (toupper(option))
	{
	case '1':
		{
			printf("Please enter the radius of circle: ");
			scanf_s("%f", &radius);
			area = pi*pow(radius,2);
			printf("Area: %.2f\n\n", area);
		}
	break;
	case '2':
		{
			printf("\nPlease enter the width of the rectangle: ");
			scanf_s("%f", &width);
			printf("\nPlease enter the length of the rectangle: ");
			scanf_s("%f", &length);
			area = width*length;
			printf("Area: %.2f\n\n", area);
		}
	break;
	case'3':
		{
			printf("\nPlease enter the length of the square: ");
			scanf_s("%f", &length);
			area = pow(length, 2);
			printf("Area: %.2f\n\n", area);
		}	
	break;
	case'4':
		{
			printf("\nPlease enter the length of the hexagon: ");
			scanf_s("%f", &length);
			area = (((3 * (3 * 0.5)) / 2)*length*length);
			printf("Area: %.2f\n\n", area);
		}
	break;
	case'5':
		{
			printf("\nBase: ");
			scanf_s("%f", &base);
			printf("Height: ");
			scanf_s("%f", &height);
			area = 0.5*height*base;
			printf("\nArea: %.2f\n\n", area);
		}
	break;
	case'6':
		{
			printf("\nBye bye,See you again ^_^ \n\n");
		}
	break;
	default:printf("invalid!!\n\n");
		break;
	}
}