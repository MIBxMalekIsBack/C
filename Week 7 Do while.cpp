#include<stdio.h>
void main()
{
	char option = ' ';
	char dummy = ' '; //declare dummy sbb useless. sbb nak dummy Enter key(to absorb extra key)

	do
	{                    //before accept char,letak fflush
						 //fflush(stdin);  //clear all standard input. remove unnecessary input. selalu jadi bila nak accept character
		printf("Enter character <E to stop>: ");
		option = getchar();
		dummy = getchar(); //kalau guna ni..xpayah fflush
	} while (option != 'E');

}