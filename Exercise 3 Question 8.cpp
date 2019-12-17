#include<stdio.h>
void main()
{
	int YearOfBorn = 0, upsr = 0, pmr = 0, spm = 0;

	printf("Enter Birth Year: ");
	scanf_s("%d", &YearOfBorn);

	upsr = YearOfBorn + 12;
	pmr = YearOfBorn + 15;
	spm = YearOfBorn + 17;

	printf("\nYear to sit for UPSR: %d", upsr);
	printf("\nYear to sit for PMR: %d", pmr);
	printf("\nYear to sit for SPM: %d\n\n", spm);

}