#include <stdio.h>

int main()
{
	char c, *ptr_c;

	c = 'A';
	printf("c: address= %p, value= %c\n", &c, c);
	ptr_c = &c;
	printf("ptr_c: address= %p, value= %p\n", &ptr_c, ptr_c);
	printf("*ptr_c value= %c\n", *ptr_c);
	*ptr_c = 'T';/*updates the content of variable c*/
	printf("ptr_c: address= %p, value= %p\n", &ptr_c, ptr_c);
	printf("*ptr_c value: %c\n", *ptr_c);
	printf("c updated: address= %p, value= %c\n", &c, c);
	return 0;
}
