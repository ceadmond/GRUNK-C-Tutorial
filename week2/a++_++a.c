#include <stdio.h>

int main()
{
	int a;
	a = 10;

	printf("a++=%d\n", a++);
	printf("a=%d\n", a);

	printf("++a=%d\n", ++a);
	printf("a=%d\n", a); \\前缀后缀

	return 0;
}