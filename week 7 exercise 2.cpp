/*#include<stdio.h.>
void main()
{
	int x, y;
	for (x = 0; x <= 12; x++)
	{
		for (y = 2; y <= 4; y++)
		{
			printf("%d X 2 = %d \t", x, y, x*y);
		}
		printf("\n");
	}
	printf("\n\n");
}*/
#include<stdio.h>
void main()

{
	int number;

	for (number = 0; number <= 12; number++)
	{
		printf("%d x 2 = %d\t", number, number * 2);
		printf("%d x 3 = %d\t", number, number * 3);
		printf("%d x 4 = %d\n", number, number * 4);
	}
	printf("\n\n");
}