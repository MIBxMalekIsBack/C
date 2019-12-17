/*The program below accept car speed from the user. The output of the program is either
warning message or greeting message

speed > 110 warning message
speed<=110 greeting message
valid speed range is 0 - 200*/

#include<stdio.h>
void main()
{
	int speed = 0;
	printf("Enter your car speed: ");
	scanf_s("%d", &speed);

	if (speed < 0 || speed > 200) //validation   //Guna ||
		printf("invalid speed!! \n\n");
	else
	{  //valid speed
		if (speed >= 110)
			printf("Danger!! You are speeding !! \n\n");
		else
			printf("Thank you for driving safely\n\n");
	}

}
/*#include<stdio.h>
void main()
{
int speed = 0;
printf("Enter your car speed: ");
scanf_s("%d", &speed);

if (speed >= 0 && speed <= 200) //validation   //guna &&
{  //valid speed
if (speed >= 110)
printf("Danger!! You are speeding !! \n\n");
else
printf("Thank you for driving safely\n\n");
}
else
printf("invalid speed!! \n\n");

}*/