#include<stdio.h>
void main()
{
	int hours = 0;
	float pay = 0.0;

	printf("Hours: ");
	scanf_s("%d", &hours);

	if (hours >= 1 && hours <= 2)
		printf("RM 2\n\n");
	else
		if (hours > 2)
		{
			pay = (1 * 2) + ((hours - 2) * 2);
			printf("Please pay %0.2f\n\n", pay);
		}
		else
			if (hours <= 0)
				printf("invalid hours\n\n");
}