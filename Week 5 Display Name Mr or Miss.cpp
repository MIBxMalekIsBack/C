/*#include<stdio.h>
void main()
{
	char name[50]; //declare a string variable
	char gender = ' '; //declare a character variable

	printf("Your name: ");
	gets_s(name); //accept a string

	printf("Your gender [M]ale / [F]emale: ");
	gender = getchar(); //accept a character

	if (gender == 'M'|| gender=='m') //     ||=OR
	{
		printf("\nhow are you, ");
		printf("Mr. %s .\n\n", name);
	}
	else
		if (gender == 'F' || gender == 'f')
		{
			printf("How are you, ");
		printf("Ms. %s .\n\n", name);
		}
		else
			printf("Invalid gender entered !! \n\n");
	printf("bye bye !! \n\n");
}*/
#include<stdio.h>
#include<ctype.h> //sbb ada toupper() function // tolower() function= uppercase to lowercase
void main()
{
	char name[50]; //declare a string variable
	char gender = ' '; //declare a character variable

	printf("Your name: ");
	gets_s(name); //accept a string

	printf("Your gender [M]ale / [F]emale: ");
	gender = getchar(); //accept a character

	if (toupper(gender) == 'M') //     //toupper = convert lowercase to uppercase
	{
		printf("\nhow are you, ");
		printf("Mr. %s .\n\n", name);
	}
	else
		if (toupper(gender) == 'F')
		{
			printf("How are you, ");
			printf("Ms. %s .\n\n", name);
		}
		else
			printf("Invalid gender entered !! \n\n");
	printf("bye bye !! \n\n");
}