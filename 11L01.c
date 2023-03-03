#include <stdio.h>

int main()
{
	char c = 'B';
	int x = 7;
	float y = 123.567; /*declaration & initialization of variables*/

	printf("c: address=%p, value= %c\n", &c, c);
	printf("x: address=%p, value= %d\n", &x, x);
	printf("y: address=%p, value= %.2f\n", &y, y);
	return 0;
}
