#include<stdio.h>
void main()
{
	int side = 0, length = 0, perimeter = 0, area = 0;

	printf("Side: ");
	scanf_s("%d", &side);

	printf("length: ");
	scanf_s("%d", &length);

	perimeter = side + side + length + length;
	area = side*length;

	printf("\nThe Perimeter of Rectangle = %d", perimeter);
	printf("\nThe Area of Rectangle = %d\n\n", area);
}