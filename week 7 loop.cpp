#include<stdio.h>
void main()
{
	int number = 10;            //initial value

	while (number >= 1)           //condition
	{//loop body
		printf("%d \t", number - 1);
		number -= 2;             //increase counter,change the value 
	}//loop body
	printf("\n\n");
}