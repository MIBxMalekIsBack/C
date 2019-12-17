#include<stdio.h>

void triangle();           //prototype
void circle();              //prototype
void menu();                 //prototype

float base = 0.0, height = 0.0;             //GLOBAL VARIABLE
float tri_area = 0.0;                       //GLOBAL VARIABLE
float radius = 0.0, cir_area = 0.0;         //GLOBAL VARIABLE
char option = ' ';                          //GLOBAL VARIABLE

void main()                  //main() penting , kalau xde main()..x bole run
{
	menu();
}

void menu()
{
	printf("[A] Triangle\n");
	printf("[B] Circle\n");
	printf("[E] Exit\n\n");
	printf("Enter your choice: ");
	option = getchar();

	switch (option)
	{
	case'A':
	case'a':triangle();  //calling function
		break;
	case'B':
	case'b':circle();     //calling function 
		break;
	case'E':
	case'e':printf("Thank you, bye bye!!\n\n");
		break;
	default:printf("Invalid Option!!\n\n");
	}
}

void circle()
{
	printf("Enter the radius: ");
	scanf_s("%f", &radius);

	cir_area = 3.142*radius*radius;

	printf("The Area of the circle is %.2f\n\n", cir_area);
}

void triangle()
{
	printf("Enter the base: ");
	scanf_s("%f", &base);

	printf("Enter the height: ");
	scanf_s("%f", &height);

	tri_area = 0.5*base*height;

	printf("The area of the triangle is %.2f.\n\n", tri_area);
}