/*Week8(Thursday 1 / 12 / 2016)
Write a program that accept the customer information below and calculate the amount they need to pay for the number of cupcake they purchase.

Customer information :
Customer name 	string type		30 characters
Customer gender	charac type		F, M

Product information :
Cupcake code		string type		e.g) C001
Cupcake name		string type		20 characters
Price			real number		2 dp
Quantity		integer

Sample output :
Mr.Ali Baba, you have to pay RM36.00 for the 10 coffee cupcakes.*/


#include <stdio.h>
#include <ctype.h>

void customer();
void product();
void calculate();
void compute();
void greetings();

float price = 0.0;
int quantity = 0;
float amount = 0.0;
char gender = ' ';
char name[30];
float total_amount = 0.0;
char another = ' ';


void compute()
{
	do
	{
		product();
		fflush(stdin);
		total_amount = total_amount + amount;
		printf("Another type of cupcake? [Y/N] :");
		another = getchar();
		fflush(stdin);
		printf("\n");

	} while (toupper(another) != 'N');
}

void greetings()
{
	if (gender == 'M' || gender == 'm')
	{
		printf("Hello Mr %s\n", name);
		printf("You have to pay RM%0.2f for the cupcake purchase\n\n", amount);
	}
	else
		if (gender == 'F' || gender == 'f')
		{
			printf("Hello Ms %s\n", name);
			printf("You have to pay RM%0.2f for the cupcake purchase\n\n", amount);
		}
		else
			printf("Invalid gender. Bye!\n");

}

void calculate()
{

	amount = price * quantity;
	printf("You need to pay : %0.2f\n\n", amount);

}


void main()
{
	customer();
	compute();
	//product();
	calculate();

	greetings();
}
void product()
{
	char c_name[20];
	char code[5];

	printf("Cupcake Information :\n\n");
	printf("C001 \t Banana Cupcake \t RM2.00 \n");
	printf("C002 \t Chocolate Cupcake \t RM2.50 \n");
	printf("C003 \t Apple Cupcake \t\t RM3.00 \n");
	printf("C004 \t Durian Cupcake \t RM3.50 \n\n");

	fflush(stdin);
	printf("Enter cupcake code : ");
	gets_s(code);

	printf("Enter cupcake name : ");
	gets_s(c_name);

	printf("Enter cupcake's price[RM] : ");
	scanf_s("%f", &price);

	printf("Quantity : ");
	scanf_s("%d", &quantity);

}
void customer()
{



	printf("Enter your name :");
	gets_s(name);

	printf("Your gender [M]ale / [F]emale :");
	gender = getchar();


}


