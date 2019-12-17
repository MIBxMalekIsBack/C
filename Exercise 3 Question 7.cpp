/*#include<stdio.h>
void main()
{
	int minute = 0;
	float amount = 0.0, pay = 0.0;

	printf("Total minute you use: ");
	scanf_s("%d", &minute);

	amount = 60 + (minute*0.3);
	pay = amount + (amount*0.15);

	printf("You Bill = RM%.2f\n\n", pay);
}*/
#include<stdio.h>
#define rate 0.3
#define tax 0.15
void main()
{
	int minute = 0;
	float amount = 0.0, pay = 0.0;

	printf("Total minute you use: ");
	scanf_s("%d", &minute);

	amount = 60 + (minute*rate);
	pay = amount + (amount*tax);

	printf("You Bill = RM%.2f\n\n", pay);
}