#include <stdio.h>
int main()
{
	int x;
	int n = 0;

	scanf("%d", &x);

	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
		//printf("x=%d,n=%d", x, n);
	}

	printf("%d", n);

	return 0;
}

/*
#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int n = 0;

	do
	{
		x /= 10;
		n++;
	} while (x > 0);
	printf("%d", n); //注意do-while循环while结尾带";"

	return 0;
}
*/