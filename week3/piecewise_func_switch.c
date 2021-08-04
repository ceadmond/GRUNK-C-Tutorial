#include <stdio.h>
int main()
{
	int x, y, z;
	scanf("%d", &x);

	if (x < 0) {
		y = -1;
	} else if (x == 0)
	{
		y = 0;
	} else {
		y = 1;
	}

	switch (y) {
	case -1:
		z = -1;
		break;
	case 0:
		z = 0;
	case 1:
		z = 2 * x;
		break;
	}
	printf("%d", z);

	return 0;
}