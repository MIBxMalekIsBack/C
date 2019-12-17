#include<stdio.h>
#include<math.h>
void main()
{
	int number = 0, pow2 = 0, pow3 = 0;

	printf("Enter a number: ");
	scanf_s("%d", &number);
	
	if (number > 0)
	{
		pow2 = pow(number, 2);
		//scanf_s("%d", &pow2);
		pow3 = pow(number, 3);
		//scanf_s("%d", &pow3);

		printf("\nInput number: %d", number);
		printf("\nPower of two: %d", pow2);
		printf("\nPower of three: %d", pow3);
		printf("\n\n");
	}
	else
		printf("invalid!!\n\n");
}