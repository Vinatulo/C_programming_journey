#include <stdio.h>

int increment(int *p)
{
	while (*p < 11)
	{
		(*p)++;
		printf("%d\n", *p);
	}

}

int main()
{
	int a;
	a = 0;
	increment(&a);
	return (0);
}
