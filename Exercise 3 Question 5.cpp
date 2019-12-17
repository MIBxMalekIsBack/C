/*#include<stdio.h>
#define pi 3.142
void main()
{
	float base = 0.0, height = 0.0, volume = 0.0;
	printf("Height of cone: ");
	scanf_s("%f", &height);

	printf("Radius of the cone: ");
	scanf_s("%f", &base);

	volume = (1.0 / 3) * base*height;

	printf("\nVolume of cone: %.2f\n\n", volume);
}*/
#include<stdio.h>
#define pi 3.142
void main()
{
	float base = 0.0, height = 0.0, volume = 0.0;
	printf("Please enter the BASE and HEIGHT of the cone:\n");
	scanf_s("%f%f", &base, &height);

	volume = (1.0 / 3) * base*height;

	printf("\nVolume of cone: %.2f\n\n", volume);
}