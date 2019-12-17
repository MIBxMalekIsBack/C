#include<stdio.h>
void main(void)
{
	int side = 0;
	int area = 0;

	printf("This program calculate area of square\n\n");
	printf("side:");
	scanf_s("%d", &side);

	area = side*side;

	printf("area: %d\n", area);
}