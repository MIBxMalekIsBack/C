#include<stdio.h>
void main()
{
	int number = 1;
	while (number != 0)
	{
		printf("Emter a number: ");
		scanf_s("%d", &number);

		printf("You entered %d\n", number);
	}
}