#include<stdio.h>
#include <stdbool.h> 

int main()
{
	int num;
	
	printf ("~16 = %d \n\n", ~16);

	printf ("4 & 6 = %d \n\n", 4 & 6);

	printf ("4 && 6 = %d \n\n", 4 && 6);

	printf ("7 | 8 = %d \n\n", 7 | 8);

	printf ("7 || 8 = %d \n\n", 7 || 8);

	printf ("3 ^ 7 = %d \n\n", 3 ^ 7);

	printf (" 5 << 2 = %d \n\n", 5 << 2);

	num = 8;
	num = num << 1;
	printf ("new num = %d \n\n", num);

	return 0;
}
