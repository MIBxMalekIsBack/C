#include <stdio.h>
#include<string.h>
#define password "Hello"

void main()
{
	char mypass[6] = " ";
	int attempt = 1;

	do
	{
		printf("Enter your password: ");
		gets_s(mypass);
		if (strcmp(mypass, password) != 0)
		{
			printf("Invalid password!!\n\n");
			attempt++;
		}
	} while (strcmp(mypass, password) != 0 && attempt <= 3);
	if (attempt >= 3)
		printf("read manual!!\n\n");
}