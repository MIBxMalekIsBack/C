/*Given the formula, Area-3.142 x radius x radius
Write a program to calculate area of circle
#include<stdio.h>
void main(void)
{
	float radius=0.0;
	float area=0.0;

	printf("Radius:");
	scanf_s("%f", &radius);

	area = 3.142*radius*radius;
	printf("the area of circle is %.2f", area);
}*/

#include<stdio.h>
#include<math.h> // guna sbb kat bwh guna power function
#define pi 3.142 //define a constant
void main()
{
	float radius = 0.0; //declare and initialise variable
	float area = 0.0;

	printf("Enter the radius:");
	scanf_s("%f", &radius);

	area = pi*radius*radius; // bole guna power of 2 = pow(radius,2)

	printf("The area is %0.2f \n\n", area); //%0.2f = floating point with 2 decimal places


}