#include<stdio.h>
#define size 5

int numlist[size] = { 12, 9, 7, 1, 5 };
int index = 0;
int target = 0;
bool found = false;

void main()
{
	printf("Enter the target number : ");
	scanf_s("%d", &target);

	do
	{
		if (numlist[index] == target)
			found = true;
		else
			index++;
	} while (!found && index < size);

	if (found) //if condition false, go to else
		printf("The target number is in location %d\n\n", index);
	else
		printf("No record found!\n\n");
}