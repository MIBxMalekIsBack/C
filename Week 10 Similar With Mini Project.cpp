#include<stdio.h>
#include<ctype.h>
#include<Windows.h>

void insert();
void insertion();
void display();
void menu();

#define size 20

struct florist_type {
	char f_id[5];
	char f_name[30];
	float f_price;
	int f_quantity;
	int f_reorder;
};
florist_type flower[size];

int i = 0, j = 0;
char option = ' ';
char dummy = ' ';

void main()
{
	for (;;)
	{
		menu();
	}
}

void menu()
{
	int choice = 0;

	printf("1 ==>> Enter Flower Information\n");
	printf("2 ==>> Display Flower Information\n");
	printf("3 ==>> Exit\n\n");
	printf("Enter your choice : ");
	scanf_s("%d", &choice);
	fflush(stdin);
	system("cls");

	switch (choice)
	{
	case 1:insertion();
		break;
	case 2:display();
		break;
	case 3:exit(0);
		break;
	default:printf("Invalid number");
	}

}

void display()
{
	system("cls");
	printf("=============================================================\n");
	printf("ID\t\tName\t\tQuantity\t\tPrice\t\t\n");
	printf("=============================================================\n\n");
	for (j = 0; j < i; j++)
	{
		printf("%s\t\t", flower[j].f_id);
		printf("%s\t\t", flower[j].f_name);
		printf("%d\t\t", flower[j].f_quantity);
		printf("%0.2f\t\t\n\n", flower[j].f_price);
	}
	system("pause");
	system("cls");
}

void insertion()
{
	do
	{
		dummy=getchar();
		system("cls");
		insert();
		i++;
		dummy = getchar();
		printf("Another record [Y/N] : ");
		option = getchar();
	} while (toupper(option) == 'Y' && i < size);
	system("cls");
}

void insert()
{

	printf("Flower code : ");
	gets_s(flower[i].f_id);

	printf("Flower name : ");
	gets_s(flower[i].f_name);

	printf("Flower price : ");
	scanf_s("%f", &flower[i].f_price);

	printf("Flower Quantity : ");
	scanf_s("%d", &flower[i].f_quantity);

	printf("Flower Re-order Level : ");
	scanf_s("%d", &flower[i].f_reorder);

}