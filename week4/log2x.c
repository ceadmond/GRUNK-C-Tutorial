#include <stdio.h>
int main()
{
	int x;
	int ret = 0; // int ret = -1;

	scanf("%d", &x);

	int t = x;
	while (x > 1) {
		x /= 2;
		ret++;
	}
	// (x > 0)
	printf("log2 of %d is %d.", t, ret);

	return 0;
}