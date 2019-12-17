#include<stdio.h>
void main()
{
	int a = 6, b = 7, c = 8, x = 9;
	
	x == a + b++*++c - 6;
	x = ++x*b++ + 2 * x&++b;
	//x = c++ -- - b*b++ / a;
	printf("%d", x);
}