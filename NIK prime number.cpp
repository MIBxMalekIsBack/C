#include <stdio.h>
int main()
{
	int n, i, flag = 0;

	printf("Enter a positive integer: ");
	scanf_s("%d", &n);

	for (i = 2; i <= n / 2; ++i)
	{
		// condition for nonprime number
		if (n%i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("%d is a prime number.\n\n", n);
	else
		printf("%d is not a prime number.\n\n", n);

	return 0;
}