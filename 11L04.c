#include <stdio.h>
/**
 *pointing to the same memory location with more than one pointer.
 */

int main()
{
	int x;
	int *ptr_1, *ptr_2, *ptr_3;

	x = 1234;
	printf("x; address= %p, value= %d\n", &x, x);
	ptr_1 = &x;
	printf("ptr_1: address= %p, value= %p\n", &ptr_1, ptr_1);
	printf("*ptr_1: value= %d\n", *ptr_1);
	ptr_2 = &x;
	printf("ptr_2: address= %p, value= %p\n", &ptr_2, ptr_2);
	printf("*ptr_2: value= %d\n", *ptr_2);
	ptr_3 = &x;
	printf("ptr_3: address= %p, value= %p\n", &ptr_3, ptr_3);
	printf("*ptr_3: value= %d\n", *ptr_3);
	return (0);
}
