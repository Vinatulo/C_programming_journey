#include <stdio.h>

int* findSquare(int* number)
{
	int square = *number * *number;

	*number = square;
	return (number);
}

int main()
{
	int number = 22;
	int* result = findSquare(&number);

	printf("Result is: %d\n", *result);
	return 0;
}
