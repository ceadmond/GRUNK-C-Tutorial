#include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);

	int hours1 = a / 100;
	int minutes1 = a % 100;

	int minutes = hours1 * 60 + minutes1 + b;

	int hours2 = minutes / 60;
	int minutes2 = minutes % 60;

	printf("%d%d\n", hours2, minutes2);

	return 0;
}