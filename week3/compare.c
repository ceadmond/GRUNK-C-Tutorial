#include <stdio.h>
int main()
{
	int a, b;

	printf("请输入两个整数");
	scanf("%d %d", &a, &b);

	int max = 0;
	if ( a > b ) {
		max = a;
	} else {
		max = b;
	}

	printf("两整数中较大的是%d\n", max);
}

/*
int a, b;

printf("请输入两个整数: ");
scanf("%d %d", &a, &b);

int max = b;
if ( a > b ) {
	max = a;
}

printf("两整数中较大的是%d\n", max);
*/