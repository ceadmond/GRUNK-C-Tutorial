#include <stdio.h>
int main() {
	printf("请分别输入身高的英尺和英寸: ");

	double foot;
	double inch; //双精度浮点数

	scanf("%lf %lf", &foot, &inch);

	printf("身高是%f米.\n", ((foot + inch / 12) * 0.3048));
	/*
	由于输入的是整数但需要输出浮点数
	因此输出的身高实际上只有foot部分换算的结果
	最简单的改法是将12改为12.0变为浮点数
	*/

	return 0;
}