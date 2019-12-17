#include<stdio.h>
#include<ctype.h>
void main()
{
	char option = ' ';

	printf("[A] = Triangle\n");
	printf("[B] = Circle\n");
	printf("Enter your choice: ");
	option = getchar(); //accept a character

	option = toupper(option); //convert to uppercase --> LAGI BAGUS !!
	switch (option)  //bole tulis toupper(option) but not store in variable option
	{
	case 'A':
	case 'a': //boleh tulis mcm ni.. better guna toupper
	{
		printf("Triangle calculation!!\n\n");
	}

	break;
	case 'B': {
		printf("Circle calculation!!\n\n");
	}
			  break;
	default:printf("invalid option!!\n\n");
	}
	printf("Bye bye");
}