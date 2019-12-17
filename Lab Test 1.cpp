#include<stdio.h>
#include<math.h>
void main()
{
	double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0, f = 0.0;
	double x = 0;
	int y = 0;

	do
	{
		printf("A [cannot be ZERO]: ");
		scanf_s("%lf", &a);
	} while (a == 0);

	printf("B: ");
	scanf_s("%lf", &b);

	printf("C: ");
	scanf_s("%lf", &c);

	//if (a == 0)
	//	printf("Invalid");

	d = (b*b) + (4 * a*c);
	e = 2 * a;
	f = sqrt(d);

	x = (-b + f) / e;

	printf("%f\n\n", x);
}
