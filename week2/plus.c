#include <stdio.h>
int main() {
	int a;
	int b; //未做初始化处理

	printf("请输入两个整数: ");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
}