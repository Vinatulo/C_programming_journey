#include <stdio.h>

void findSquare(int* number)
{
	int square = *number * *number;
	*number = square;
}
int main()
{
	int number = 12;

	findSquare(&number);
	printf("Square id %d\n", number);
	return 0;
}
