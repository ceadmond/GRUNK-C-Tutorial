#include <stdio.h>
int main() {
	int price = 0; //定义初始整型变量并置零
	/*
	<类型名称><变量名称>, int price; int amount; int price, amount
	变量需要一个名字, 变量的名字是一种"标识符"
	标识符的构造规则: 只能由字母、数字和下划线构成且数字不可位于首位
	*/

	printf("请输入金额(元): ");
	scanf("%d", &price); //读入下一个整数, 读到的结果赋值给变量price

	int change = 100 - price;
	printf("找您%d元.\n", change);

	return 0;
}