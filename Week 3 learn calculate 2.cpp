#include<stdio.h>

void main()
{
	int A = 0; //declare and intialize variables
	int B = 0;
	int C = 0;

	printf("Enter the value for A :");
	scanf_s("%d", &A); //accept and store integer in variable A 

	printf("Enter the value for B :");
	scanf_s("%d", &B); //accept and store integer in variable B


	C = A + B; //calculate C using variable that stored in A and B
	printf("A is %d\nB is %d\n\n", A, B); // display answer
	printf("%d + %d = %d\n", A, B, C);
	printf("The answer C is %d\n\n", C);


}