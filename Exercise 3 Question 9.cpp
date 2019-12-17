#include<stdio.h>
void main()
{
	int x, hour, minute;
	printf("Enter time [MINUTE]: ");
	scanf_s("%d", &x);

	hour = x / 60;
	minute = x % 60;

	printf("%d minutes = %d hours and %d minutes\n", x, hour, minute);
}