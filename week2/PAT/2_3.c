#include <stdio.h>
int main()
{
	int number;
	scanf("%d", &number);

	int a = number / 100; //百位数
	int c = number % 10; //个位数

	int b1 = number % 100;
	int b = b1 / 10; //十位数

	printf("%d\n", c * 100 + b * 10 + a);

	return 0;
}