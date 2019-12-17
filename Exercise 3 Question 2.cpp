#include<stdio.h>
void main()
{
	float a = 0, b = 0;
	printf("Enter 2 floating point numbers:\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	
	printf("%.2f + %.2f= %.2f\n",a,b,a+b);
	printf("%.2f-%.2f= %.2f\n",a,b,a-b);

}