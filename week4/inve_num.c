#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int digit;
	int ret = 0;

	while (x > 0) {
		digit = x % 10;
		// printf("%d", digit);
		// 若需要输出800个格式为008
		ret = ret * 10 + digit;
		// printf("x=%d,digit=%d,ret=%d", x, digit, ret);
		// 调试过程
		x /= 10;
	}

	printf("%d", ret);

	return 0;
}