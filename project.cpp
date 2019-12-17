#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void menu();
void insert();
void display();
void search();
void reorder();
void update();
void GetFlower();

int i = 0, j = 0;

struct flower_info
{
	int flower_id;
	char flower_name[20];
	int flower_quantity;
	float flower_price;
	int flower_reorder;

}flower[20];

void main()
{
	for (;;)
	{
		menu();
	}
}
void menu()
{
	int Option;  //is a local variable since we need it only in this function.

	system("cls");  //used to tell the computer to clean cmd window.

	
	printf("\n\n\t Flower Florist Inventory Management System");
	printf("\n\n\t********************************************");
	printf("\n\n\t1=>  Insert new flower information.");
	printf("\n\n\t2=>  Display all flower information.");
	printf("\n\n\t3=>  Search for record");
	printf("\n\n\t4=>  Display the reorder level flower.");
	printf("\n\n\t5=>  Update a flower record.");
	printf("\n\n\tEnter your choice : ");
	scanf_s("%d", &Option);

	while (Option <= 0 || Option > 5)  //using while loop if the computer recieved any wrong input and allow them to enter again.
	{
		printf("     --------------\n");
		printf("     *INVALID OPTION*\n");
		printf("     Again, Enter your choice. [1,2,3,4,5] : ");
		scanf_s("%d", &Option);

	}
	system("cls");

	switch (Option)  //used to call different functions in a variety of different cases.
	{

	case 1:

		insert();
		break;

	case 2:

		display();
		break;

	case 3:

		search();
		break;

	case 4:

		reorder();
		break;
	case 5:

		update();
		break;

	default:

		update();

		break;

	}

}

void GetFlower()
{
	char dummy = ' '; //declare dummy because useless. because want to dummy Enter key(to absorb extra key)

	printf("\n\n\n\n\tEnter a Flower ID : F");
	scanf_s("%d", &flower[i].flower_id);

	while (flower[i].flower_id <= 0 || flower[i].flower_id > 9999)
	{
		system("color 03");

		system("cls");
		printf("\n\n\t_________________________________________");
		printf("'\n\n\t Invalid! has to be more than[0] and less than[9999] '");
		printf("\n\n\tEnter a Flower ID : F");
		scanf_s("%d", &flower[i].flower_id);

		system("color 07");

	}
	dummy = getchar();  //declare dummy because useless. because want to dummy Enter key(to absorb extra key)
						// same like fflush(stdin) function

	printf("\n\tEnter Flower name : ");
	gets_s(flower[i].flower_name, 20);
	do
	{

		printf("\n\tEnter Flower Quantity : ");
		scanf_s("%d", &flower[i].flower_quantity);

	} while (flower[i].flower_quantity <= 1 || flower[i].flower_quantity > 999);
	do
	{

		printf("\n\tEnter Flower Price [RM] : ");
		scanf_s("%f", &flower[i].flower_price);

	} while (flower[i].flower_price <= 0);
	do
	{

		printf("\n\tEnter flower reorder level : ");
		scanf_s("%d", &flower[i].flower_reorder);

	} while (flower[i].flower_reorder <= 1 || flower[i].flower_reorder > 99);


}

void insert()
{
	int Add = 0, count = 1;

	do //It is a Post-Test Loop. for the need to insert several products while remaining in the same function.
	{
		GetFlower(); //calling a function inside another function.

		printf("\n\n\t_________________________________________");
		printf("\n\n\tSuccessfully added %d new record/s.                     ", count);
		printf("\n\n\tpress \"0\" to add new flower or \"Anynumber\" to end : ");
		scanf_s("%d", &Add);
		
		system("cls");

		++i, ++j, ++count; 	/*here we are adding ++ to all of our counters. i is a temporary counter
							which means it will be setted to zero eachtime we enter a new function.
							while j will not be touched. ++count is used here to be more user friendly.*/


	} while (Add <= 0 && i < 20); //*these are the conditionds to keep looping. included the maximum length of the array.* /

}
void display()
{

	printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Price|");
	printf("\n---------------------------------------------------------------------------------------");

	for (i = 0; i < j; i++) //For loop is used to loop all inside the structure to display everything.
	{
		printf("\n\t%04d\t\t%s\t\t%d\t\t\t%.2f", flower[i].flower_id, flower[i].flower_name,
			flower[i].flower_quantity, flower[i].flower_price);
		printf("\n---------------------------------------------------------------------------------------\n");
	}

	system("pause");  //system("pause") is telling the computer to stop processing until a user click occur.

}
void search()
{
	int search, option = 0, found;

	/*down here we are having a nested looop "while" and "for" in addition to "if" condition.
	and we used "while" as it's a pre-test loop. as a result we had to assign a starting value for the
	condition to be true and enter the loop. knowing that we are using a checker named as "found" to easily
	and safely manipulate with loops and conditions.*/
	while (option == 0)
	{
		printf("According to Flower ID, which one you wanna search for ? \n\n");
		scanf_s("%d", &search);
		found = 1;

		for (i = 0; i < j; i++)
		{
			if (search == flower[i].flower_id)
			{
				found = 0;

				printf("\nEngine found something!\n\n");
				printf("* Here's some Information about flower num %d. \n", search);
				printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Price |");
				printf("\n---------------------------------------------------------------------------------------");
				printf("\n\t%04d\t\t%s\t\t%d\t\t\t%.2f", flower[i].flower_id, flower[i].flower_name, flower[i].flower_quantity, flower[i].flower_price);
				printf("\n---------------------------------------------------------------------------------------\n");
			}

		}

		if (found != 0) //if the input of the user didnt match any of the existing products. the following will appear.
		{
			printf("* There is no flower with a %d  ID.", search);
			printf("\n\n\t_________________________________________");
			printf("\n\n\tPress \"0\" to search again or \"Anynumber\" to end : ");
			scanf_s("%d", &option);
			system("cls");

		}
		else
		{
			
			printf("\n\n\t_________________________________________");
			
			printf("\n\n\tpress \"0\" to search again, \"5\" to Update or \"Anynumber\" to end : ");
			scanf_s("%d", &option);
			system("cls");
		}

	}
	if (option == 5) /*this "if" is used to guide the user to update the product that user searched for if user wants to.*/
	{
		for (i = 0; i < j; i++)
		{
			if (search == flower[i].flower_id) 			/*Now here, we are comparing the user input with the existing Flower ID. if so,
														we call a function named "GetFlower()" to accept a new product information.*/
			{
				GetFlower();
				printf("\n\n\t_________________________________________________");
				printf("*\n\n\t Flower with a %d ID successfully Updated.\n\n\n", search);
				system("pause");

			}

		}

	}

}
void reorder()
{

	printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Price |");
	printf("\n---------------------------------------------------------------------------------------");


	for (i = 0; i < j; i++)
	{
		/*here where the comparison is. so if the condition is true it will print.
		if the conditon is false then go back to for loop.*/
		if (flower[i].flower_quantity < flower[i].flower_reorder) /*Comparison = If the condition is true it will print.
																  If the conditon is false then go back to for loop.*/
		{

			printf("\n\t%04d\t\t%s\t\t%d\t\t\t%.2f", flower[i].flower_id, flower[i].flower_name, flower[i].flower_quantity, flower[i].flower_price);
			printf("\n---------------------------------------------------------------------------------------\n");

		}

	}


	system("pause");

}
void update()
{
	int update, found, option = 1;

	do
	{
		system("cls");

		display(); /*calling a function named "display" for a more user-friendly program*/

		printf("According to Flower ID, which one you wanna update ? \n\n");
		scanf_s("%d", &update);
		system("cls");
		found = 0;
		for (i = 0; i < j; i++)
		{


			if (update == flower[i].flower_id)
			{
				found = 1;

				GetFlower(); /*again the function GetFlower(); has been called to update flower information*/
				system("cls");

				printf("\n\n\t_________________________________________________");
				printf("\n\n\t* Flower with a %d ID successfully Updated.\n", update);
				printf("Enter \"0\" to Update another one or \"Anynumber\" to exit:\n");
				scanf_s("%d", &option);

			}

		}
		if (found == 0)
		{
			printf("No such a record to Update!\n");
			printf("Enter \"0\" to re-do or \"Anynumber\" to exit:\n");
			scanf_s("%d", &option);
		}
	} while (option == 0);
}



