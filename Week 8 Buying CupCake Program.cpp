/* write a program that accept the customer information below and calculate the amount they need  to pay for
the number of cup cake the purchase

Customer Information :
Customer name		string type			30 character
customer gender		charcarter type		F,M

Product Information:
cupcake code	string type		e.g C001
cupcake name	string type		20 character
price			real number		2 decimal places
quantity		integer

sample output:

Mr.Ali Baba, you have to pay RM36.00 for the 10 coffee cupcakes
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void menu();
void choice();
void customer();
void greeting();
void pay();
void closure();

char name[30];
char gender = ' ';
int quantity = 0;
int code = 1;
float price = 0.0, total = 0.0, total1 = 0.0;
float a = 0.0, b = 0.0, c = 0.0;



void main()
{

	customer();
	greeting();
	do
	{
		menu();
		if (code != 0)
			choice();
	} while (code != 0);
	pay();
	closure();
}

void customer()
{
	printf("What is your name: ");
	gets_s(name);

	printf("Gender: ");
	gender = getchar();
}
void greeting()
{
	if (gender == 'm' || gender == 'M')
	{
		printf("Hello Mr. %s. \n\n", name);
	}
	else
		if (gender == 'f' || gender == 'F')
			printf("Hello Ms. %s. \n\n", name);
		else
			printf("Invalid Gender !!!!");

}

void menu()
{
	printf("CupCake Code\t CupCake Name\t Price per Unit\n");
	printf("\t1\t\t Chocolate\t\t RM2\n");
	printf("\t2\t\t Vanilla\t\t RM2\n");
	printf("\t3\t\t Blackberry\t\t RM2\n");
	printf("\t0\t\t exit \n\n");

	fflush(stdin);
	printf("Cup Cake code: ");
	scanf_s("%d", &code);

}

void choice()
{
	char name[20];
	{


		switch (code)
		{
		case 1:
		{
			strcpy_s(name, "Chocolate");
			price = 2;
			printf("You choose %s and the price is RM%0.2f \n", name, price);
			printf("Quantity: ");
			scanf_s("%d", &quantity);
			a = quantity*price;
			printf("Total: RM %.2f\n\n", a);

		}
		break;
		case 2:
		{
			strcpy_s(name, "Vanilla");
			price = 2;
			printf("You choose %s and the price is RM%0.2f \n", name, price);
			printf("Quantity: ");
			scanf_s("%d", &quantity);
			b = quantity*price;
			printf("Total: RM %.2f\n\n", b);
		}
		break;
		case 3:
		{
			strcpy_s(name, "Blackberry");
			price = 2;
			printf("You choose %s and the price is RM%0.2f \n", name, price);
			printf("Quantity: ");
			scanf_s("%d", &quantity);
			c = quantity*price;
			printf("Total: RM %.2f\n\n", c);
		}
		break;
		default: {
			printf("Invalid item number !!");
		}

		}

		
		//printf("Quantity: ");
		//scanf_s("%d", &quantity);

		//total = quantity*price;
		//printf("RM %.2f\n", total);*/
	}
}
void pay()
{
	total1 = a + b + c;
}
void closure()
{
	{
		if (gender == 'm' || gender == 'M')
		{
			printf("\n\nHello Mr. %s,\nYou have to pay RM %.2f for the cupccake purchase. \n\n", name, total1);
		}
		else
			printf("\n\nHello Ms. %s,\nYou have to pay RM %.2f for the cupccake purchase. \n\n", name, total1);
	}
}
