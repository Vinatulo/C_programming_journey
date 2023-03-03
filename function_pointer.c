#include<stdio.h>

int sum(int, int);

void main()
{
	int s = 0;
	int (*ptr)(int, int) = &sum;
	s = (*ptr)(4, 3);
	printf("sum = %d\n", s);
}

int sum(int a, int b)
{
	return ((a + b)+(a*b/3));
}
