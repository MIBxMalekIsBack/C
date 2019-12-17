#include<stdio.h>
#include<ctype.h>
#include<Windows.h>
struct record
{
	char flower_id[5];
	char flower_name[30];
	float flower_price = 0.0;
	int flower_quantity;
	int flower_reorder = 0;
};
record flower[20];

int i = 0, j = 0;

void search()
{
	char searchs[5];
	int option = 0, found;

	/*down here we are having a nested looop "while" and "for" in addition to "if" condition.
	and we used "while" as it's a pre-test loop. as a result we had to assign a starting value for the
	condition to be true and enter the loop. knowing that we are using a checker named as "found" to easily
	and safely manipulate with loops and conditions.*/
	while (option == 0)
	{
		printf("According to Flower ID, which one you wanna search for ? \n\n");
		scanf_s("%s", &searchs);
		printf("%s", searchs);
		found = 1;

		for (i = 0; i < j; i++)
		{
			if (searchs == flower[i].flower_id)
			{
				found = 0;

				printf("\nEngine found something!\n\n");
				printf("* Here's some Information about flower num %s. \n", searchs);
				printf("\n\n\tFlower ID\tFlower Name\tFlower Quantity\t   Flower Price |");
				printf("\n---------------------------------------------------------------------------------------");
				printf("\n\t%s\t\t%s\t\t%d\t\t\t%.2f", flower[i].flower_id, flower[i].flower_name, flower[i].flower_quantity, flower[i].flower_price);
				printf("\n---------------------------------------------------------------------------------------\n");
			}

		}

		if (found != 0) //if the input of the user didnt match any of the existing products. the following will appear.
		{
			printf("* There is no flower with a ID %s. ", searchs);
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
			if (searchs == flower[i].flower_id) 			/*Now here, we are comparing the user input with the existing Flower ID. if so,
															we call a function named "GetFlower()" to accept a new product information.*/
			{
				printf("Flower ID: ");
				scanf_s("%s",&flower[i].flower_id);

				printf("flower name: ");
				scanf_s("%s",&flower[i].flower_name);

				printf("price: ");
				scanf_s("%f", &flower[i].flower_price);

				printf("quantity: ");
				scanf_s("%d", &flower[i].flower_quantity);

				printf("reorder level : ");
				scanf_s("%d", &flower[i].flower_reorder);

				printf("\n\n\t_________________________________________________");
				printf("*\n\n\t Flower with ID %s successfully Updated.\n\n\n", searchs);
				system("pause");

			}

		}

	}

}