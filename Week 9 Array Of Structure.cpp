//Array of structure
#include<stdio.h>

struct stud_rec_type  //declare a structure type
{
	char stud_name[30];
	char stud_id[20];
	float fees;
	int age;
};
stud_rec_type student[5]; //declare an array of 5 location
int index;

void main()
{

	for (index = 0; index < 5; index++)
	{
		printf("Enter student ID: ");
		gets_s(student[index].stud_id);
	}
	for (index = 0; index < 5; index++)
		printf("Student ID entered is %s\n\n", student[index].stud_id);

}