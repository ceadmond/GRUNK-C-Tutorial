#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);

	int a = num / 16;
	int b = num % 16;

	printf("%d\n", a * 10 + b);

	return 0;
}

/*
scanf("%d");
printf("%x", x);
*/