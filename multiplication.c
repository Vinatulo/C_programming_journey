#include <stdio.h>

int* multiply(int* num1, int* num2, int* ans)
{
	*ans = *num1 * *num2;
	return ans;
}

int main()
{
	int n1= 12;
	int n2= 24;
	int s;

	int* Result = multiply(&n1, &n2, &s);
	printf("Multiplication Result: %d\n", *Result);
	return 0;
}
