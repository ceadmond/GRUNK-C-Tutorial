#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);

	int f = 0;
	if (x < 0) {
		f = -1;
	} else if (x == 0) {
		f = 0;
	} else {
		f = 2 * x;
	}
	//级联if-else(单一出口)

	printf("%d", f);

	return 0;
}