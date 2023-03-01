#include <stdio.h>

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};/* array declaration*/

	for (int i = 0; i < 4; i++)/*using loop to iterate over elements*/
	{
		numbers[0] = 105;
		printf("%d", numbers[i]);

	}
	return 0;
}
