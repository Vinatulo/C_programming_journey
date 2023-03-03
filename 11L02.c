#include <stdio.h>
/*declaring & assign values to pointers*/

int main()
{
	char c, *ptr_c;
	int x, *ptr_x;
	float y, *ptr_y;

	c = 'B';
	x = 7;
	y = 123.234;
	ptr_c = &c;
	ptr_x = &x;
	ptr_y = &y;

	printf("addres of c = %p\n", ptr_c);
	printf("addres of x = %p\n", ptr_x);
	printf("addres of y = %p\n", ptr_y);
	return (0);
}

