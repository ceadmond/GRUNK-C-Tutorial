#include <stdio.h>

int main() {
	int a = 5;
	int b = 6;
	int t; //中间变量

	t = a;
	a = b;
	b = t;

	printf("a=%d,b=%d.\n", a, b);
	return 0;
}