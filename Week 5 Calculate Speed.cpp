/*Write a program to accept the car speed from the user.
Your program is required to display either the warning message or greeting message base on the car speed entered.

speed>110--> danger , speed <= 110 --> okay*/
#include<stdio.h>
void main()
{
	int speed = 0;
	printf("Enter your speed [km/h]: ");
	scanf_s("%d", &speed);

	if (speed <= 0)
	{
		printf("INVALID SPEED !!\n"); //kalau nak tambah statement open {}
		printf("send your car to workshop !!\n\n");
	}
	else
		if (speed > 110)
			printf("DANGER !!\n\n");
		else
			printf("Okayy !\n\n");

}