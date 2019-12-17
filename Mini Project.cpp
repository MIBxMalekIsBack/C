/*====================   Header File   ======================*/
#include<stdio.h>
#include<ctype.h>
#include<Windows.h>

/*============================   User-Define Function    =======================================*/
/*Since we are using a long program, it’s easier for us to use user-defined functionsand could 
  be used several times. Better than having random numbers so it’s confusing for future maintenance 
  and updating */

#define MAXID 10
#define MAXNAME 30
#define MAXINDEX 20

/*========   Function Prototype   ========*/
/*Function declaration that specifies the data types of its arguments in the parameter list. Can be
  called when want to use it*/

void menu();
void insertion();
void GetFlower();
void display();
void search();
void reorder();
void update();

/*========================   Global Variable   ==========================*/
/*We are using global variables because is been used in several functions*/

int i = 0, j = 0;
char name[50];
char gender = ' ';
char another = ' ';
char dummy = ' ';

/*================   Flower Structure   ====================*/
/*This is an array structure to store data in to the structure
and there's a room to a maximum products of 19. Names has
a maximum number of 20 character */

struct record
{
	char flower_id[MAXID];
	char flower_name[MAXNAME];
	float flower_price = 0.0;
	int flower_quantity=0;
	int flower_reorder = 0;
};
record flower[MAXINDEX];


/*================================   Main Function   =================================*/
/*This main function is looping the whole program forever until the program is closed*/

void main()
{
	for (;;)
	{
		menu();
	}
}

/*================================   Menu Function   ===================================*/
/* This function is display the choices that the user can pick and will take him directly 
   to the next and determine function using 'Switch Case' for that and calling the
   functions with some parameter.*/

void menu()
{
	int Option;    //is a local variable since we need it only in this function.

	system("cls");   //used to tell the computer to clean 'cmd' window.

	printf("\n\n\t Flower Florist Inventory Management System");
	printf("\n\n\t********************************************");
	printf("\n\n\t1=>  Insert new flower information.");
	printf("\n\n\t2=>  Display all flower information.");
	printf("\n\n\t3=>  Search for record");
	printf("\n\n\t4=>  Display the reorder level flower.");
	printf("\n\n\t5=>  Update a flower record.");
	printf("\n\n\t6=>  Exit.");
	printf("\n\n\tEnter your choice : ");
	scanf_s("%d", &Option);

	while (Option <= 0 || Option > 7)  //using while loop if the computer recieved any wrong input and allow them to enter again.
	{
		printf("     --------------\n");
		printf("     *INVALID OPTION*\n");
		printf("     Again, Enter your choice. [1,2,3,4,5,6] : ");
		scanf_s("%d", &Option);
	}

	system("cls");
	switch (Option)  //used to call different functions in a variety of different cases.
	{

	case 1:

		insertion();
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
	case 6:
		printf("Bye bye ! See you next time ^_^ \n\n");
		exit(0);
	default:

		printf("Invalid !!");

		break;

	}
}

/*=========================   GetFlower   ================================*/
/* This function has called twice in this program [insertion() ,update()].
   What this function does it to accept a product information from the user.
   There's a lot of data validation in this function and all of them using
   do-while loop except for product ID */

void GetFlower()  
{
	int len;
	do
	{
		printf("Flower ID: ");
		gets_s(flower[i].flower_id);

		len = strlen(flower[i].flower_id); //The strlen() function to calculates the length of a given string.
		if (len >= 5 || len <= 3 && flower[i].flower_id[0] != 'f' || flower[i].flower_id[0] != 'F')
			printf("Invalid ID entered !!\n\n");
	} while (len >= 5 || len <= 3 && flower[i].flower_id[0] != 'f' || flower[i].flower_id[0] != 'F'); //this loop will keep repeating until the exact number of character of flower ID entered by user

	printf("flower name: ");
	gets_s(flower[i].flower_name);

	do
	{
		printf("price: RM");
		scanf_s("%f", &flower[i].flower_price);
		if (flower[i].flower_price < 0)
		{
			printf("Invalid Price !!\n");
			printf("Please enter correct value !\n\n");
		}
	} while (flower[i].flower_price < 0);
	do
	{
		printf("quantity : ");
		scanf_s("%d", &flower[i].flower_quantity);
		if (flower[i].flower_quantity < 0)
		{
			printf("Invalid Quantity !!\n");
			printf("Please enter correct value !\n\n");
		}
	} while (flower[i].flower_quantity < 0); //this loop will keep repeating if quantity < 0 

	do
	{
		printf("reorder level : ");
		scanf_s("%d", &flower[i].flower_reorder);
		if (flower[i].flower_reorder < 0)
		{
			printf("Invalid Re-Order Level !!\n");
			printf("Please enter correct value !\n\n");
		}
	} while (flower[i].flower_reorder < 0);    //this loop will keep repeating if reorder level < 0 
}

/* =====================   Insertion Function   ======================= */
/* This function we are allowing users to insert new product's
   information and save into the structure */

void insertion()
{
	int count = 1;

	do  //it's a post-test loop. Used for insert several products while remaining in the same function.
	{
		dummy = getchar(); //Used dummy for dummy Enter key(to absorb extra key).Same function like fflush(stdin);
		GetFlower();  //calling GetFlower function
		printf("\n\n_________________________________________");
		printf("\n\n\tSuccessfully added %d new record/s.                     ", count);
		dummy = getchar();
		printf("\n\n\nAnother flower? [Y/N] :");
		another = getchar();
		printf("\n");
		system("cls");
		
		/*here we are adding ++ to all of our counters. i is a temporary counter which means it will be set
		  to zero each time we enter a new function. while j will not be touched. ++count is used here to be
		  more user friendly.*/
		++i, ++j, ++count;

	/*these are the condition to keep looping. included the maximum length of the array.*/
	} while ((toupper(another == 'y')) && i<MAXINDEX); 

}

/* =======================   Display Function   ======================== */
/* This function is displaying all flowers that we've inserted or updated
   before regardless anything */

void display()
{

	printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Reorder Level\t   Flower Price|");
	printf("\n------------------------------------------------------------------------------------------------");

	for (i = 0; i < j; i++) //For loop is used to loop all inside the structure to display everything.
	{
		printf("\n\t%s\t\t%s\t\t%d\t\t\t%d\t\t\tRM%.2f", flower[i].flower_id, flower[i].flower_name,
			flower[i].flower_quantity,flower[i].flower_reorder, flower[i].flower_price);
		printf("\n------------------------------------------------------------------------------------------------\n");
	}
	system("pause"); //telling the computer to stop processing until a user click occur.

}

/* =======================   Search Function   ========================= */
/* In this function, we're getting the input from the user as a product ID 
   he is looking for. then we enter "for" loop trying to find it.*/

void search()
{
	int len;
	char searchs[MAXID];
	char option = ' ';
	bool found = false;
	int i = 0;

	/*down here we are having a nested loop "while" and "for" in addition to "if" condition.
	and we used "while" as it's a pre-test loop. as a result we had to assign a starting value for the
	condition to be true and enter the loop. knowing that we are using a checker named as "found" to easily
	and safely manipulate with loops and conditions.*/

	dummy = getchar();
	do
	{
		printf("According to Flower ID, which one you wanna search for ? : ");
		gets_s(searchs);

		len = strlen(searchs);
		if (len >= 5 || len <= 3 && flower[i].flower_id[0] != 'f' || flower[i].flower_id[0] != 'F')
			printf("Invalid ID entered !!\n\n");
	} while (len >= 5 || len <= 3 && flower[i].flower_id[0] != 'f' || flower[i].flower_id[0] != 'F');
	
	do
	{
		if (strcmp(flower[i].flower_id, searchs) == 0)
			found = true;
		else
			i++;
	} while (!found && i < MAXINDEX);

	if (found)
	{
		printf("\nEngine found something!\n\n");
		printf("* Here's some Information about flower ID %s. \n", searchs);
		printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Reorder Level\t   Flower Price |");
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n\t%s\t\t%s\t\t%d\t\t    \t%d\t\t\t%0.2f", flower[i].flower_id, flower[i].flower_name, 
			flower[i].flower_quantity, flower[i].flower_reorder, flower[i].flower_price);
		printf("\n-------------------------------------------------------------------------------------------------\n");
	}
	else
	{ /*If the input of the user didnt match any of the existing products. the following will appear.*/
		printf("No record found!\n\n");
	}
	system("pause");
	system("cls");
}

/* =======================   Reorder Function   ======================== */
/*The main purpose of this function is to show all products that the quantity
  is lesser than the reorder level and not displaying the rest.*/

void reorder()
{

	printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Re-Order Level\tFlower Price |");
	printf("\n------------------------------------------------------------------------------------------------------\n");


	for (i = 0; i < j; i++)
	{
		/*here where the comparison is. so if the condition is true it will print.
		if the conditon is false then go back to for loop.*/
		if (flower[i].flower_quantity < flower[i].flower_reorder) /*Comparison = If the condition is true it will print.
																  If the conditon is false then go back to for loop.*/
		{

			printf("\n\t   %s\t\t   %s\t\t   %d\t\t   %d\t\t\t\t%.2f", flower[i].flower_id, flower[i].flower_name, flower[i].flower_quantity,flower[i].flower_reorder, flower[i].flower_price);
			printf("\n-----------------------------------------------------------------------------------------------------\n");

		}

	}


	system("pause");

}

/* =======================   Update Function   ======================== */
/* This function is simply trying to find the desired products by their ID's.
   and again we use a checker called "found", so if (found == 0) then the 
   product isn't found. if (found == 1) then the product is found and 
   then it will overwrite */

void update()
{
	int len;
	char updates[MAXID];
	int found;
	char option = ' ';

	do
	{
		system("cls");

		display(); /*calling a function named "display" for a more user-friendly program*/
		dummy = getchar();
		do
		{
			printf("According to Flower ID, which one you wanna update? : ");
			gets_s(updates);

			len = strlen(updates);
			if (len >= 5 || len <= 3)
				printf("Invalid ID entered !!\n\n");
		} while (len >= 5 || len <= 3);

		found = 0;


		for (i = 0; i<MAXINDEX; i++)
		{
			if (strcmp(updates, flower[i].flower_id) == 0) //"strcmp" is used to compare 2 string
			{
				found = 1;

				printf("\nYou only can update the PRICE, QUANTITY & RE-ORDER LEVEL\n");
				printf("--------------------------------------------------------");

				printf("\nFlower ID : %s",flower[i].flower_id);
				printf("\nFlower Name : %s\n",flower[i].flower_name);

				do
				{
					printf("price: RM");
					scanf_s("%f", &flower[i].flower_price);
					if (flower[i].flower_price < 0)
					{
						printf("Invalid Price !!\n");
						printf("Please enter correct value !\n\n");
					}
				} while (flower[i].flower_price < 0);
				do
				{
					printf("quantity : ");
					scanf_s("%d", &flower[i].flower_quantity);
					if (flower[i].flower_quantity < 0)
					{
						printf("Invalid Quantity !!\n");
						printf("Please enter correct value !\n\n");
					}
				} while (flower[i].flower_quantity < 0);

				do
				{
					printf("reorder level : ");
					scanf_s("%d", &flower[i].flower_reorder);
					if (flower[i].flower_reorder < 0)
					{
						printf("Invalid Re-Order Level !!\n");
						printf("Please enter correct value !\n\n");
					}
				} while (flower[i].flower_reorder < 0);

				printf("\n\n\t_________________________________________________");
				printf("\n\n\t* Flower with a ID %s successfully Updated.\n", flower[i].flower_id);


			}

		}
		if (found == 0)
		{
			printf("No such a record to Update!\n");

		}
		printf("\n\n\nAnother flower? [Y/N] :");
		scanf_s("\n%c", &option);



	} while (option == 'y' || option == 'Y');

	system("cls");
}