#include <stdio.h>

int* addNumbers(int *num1, int *num2, int *sum)
{
	*sum = *num1 + *num2;
	return sum;
}

int main()
{
	int num1 = 20;
	int num2 = 80;
	int sum;

	int *Result = addNumbers(&num1, &num2, &sum);
	printf("Result printed: %d\n", *Result);
}

