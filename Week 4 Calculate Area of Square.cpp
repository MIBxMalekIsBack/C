/*Thi is how to calculate area of square*/
#include<stdio.h>
void main(void)
{
	int side = 0;
	int area = 0;

	printf("side:");
	scanf_s("%d", &side);

	area = side*side;

	printf("area:%d", area);
}