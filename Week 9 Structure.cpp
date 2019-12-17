/*structure*/
#include<stdio.h>
void data_entry();
void display_record();

struct stud_rec_type //declare structure type   //stud_rec_type - is identifier (name)
{
	char stud_id[10];
	char stud_name[30];
	float fees;
	int age;
};
stud_rec_type student;  //declare a variable of structure type

void main()
{
	data_entry();
	display_record();
}

void display_record()
{
	printf("\n\nYour name is %s\n", student.stud_name);
	printf("You ID is %s\n\n", student.stud_id);
	printf("Your are %d years old\n", student.age);
	printf("Your course fee is %.2f\n\n", student.fees);
}

void data_entry()
{
	printf("Enter student ID: ");
	gets_s(student.stud_id);

	printf("Enter student name: ");
	gets_s(student.stud_name);

	printf("Enter student age: ");
	scanf_s("%d", &student.age);

	printf("Enter student fee: ");
	scanf_s("%f", &student.fees);

}