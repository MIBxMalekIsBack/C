#include<stdio.h>
#include<ctype.h>

void customer();
void greeting();
void menu();
void subtotal();
void decision();
void choice();

char gender = ' ';
char name[50];
float price = 0.0;
int quantity = 0;
char option = ' ';
void main()
{

	customer();
	greeting();
	menu();
	choice();
	printf("Do you want to add more? [Y/N]: ");
	option = getchar();
	do
	{
		menu();
		subtotal();

		printf("Do you want to add more? [Y/N]: ");
		option = getchar();
		if (option == 'Y' || option == 'y')
			choice();
	} while (toupper((option != 'N')));

}
void customer()
{
	printf("What is your name: ");
	gets_s(name);
	printf("Your gender [M]ale / [F]emale: ");
	gender = getchar();
}
void greeting()
{
	if (gender == 'm' || gender == 'M')
	{
		printf("Hello Mr. %s. ", name);
	}
	else
		if (gender == 'f' || gender == 'F')
			printf("Hello Ms. %s. ", name);
		else
			printf("Invalid Gender !!!!");
		
}
void menu()
{
	printf("\n   CupCake Code\t CupCake Name\t Price per Unit\n");
	printf("\t1\t   Chocolate\t\t RM2\n");
	printf("\t2\t   Vanilla\t\t RM2\n");
	printf("\t3\t   Blackberry\t\t RM2\n\n");
}
void choice()
{
	int code = 0;
	char c_name[30];
	char dummy = ' ';

	//fflush(stdin);
	printf("Enter cupcake code : ");
	scanf_s("%d", &code);
	dummy = getchar();

	
	printf("Enter cupcake name : ");
	gets_s(c_name);

	printf("Enter cupcake's price[RM] : ");
	scanf_s("%f", &price);

	printf("Quantity : ");
	scanf_s("%d", &quantity);
}
void subtotal()
{
	float total = 0;
	total = quantity*price;
	printf("total: %.2f\n\n", total);
}
/*void decision()
{
	if (option != 'N' || option != 'n')
		menu();
}*/
