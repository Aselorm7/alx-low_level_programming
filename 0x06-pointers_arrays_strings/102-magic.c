#include  <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	0 = &n;

	/**
	 * write your line of code here
	 * Remember:
	 * main - magic
	 * - a is not allowed
	 * - p should not be modified
	 * - only one statement
	 * - don'nt code anything else apart
	 * - from this line of code
	 */
	*(p + 5) = 98;
	/*...so that this prints 98\n */
	printf("a[2] - %d\n", a[2]);
	return (0);
}
