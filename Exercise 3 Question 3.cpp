#include<stdio.h>
void main()
{
	float DegreesCentigrade = 0.0, Fahrenheit = 0.0;
	
	printf("Enter the temperature <centigrade>: ");
	scanf_s("%f", &DegreesCentigrade);
	
	Fahrenheit = ((DegreesCentigrade*9.0) / 5.0) + 32.0;

	printf("Equivalent temperature in Fahrenheit: %0.2f\n\n", Fahrenheit);
}