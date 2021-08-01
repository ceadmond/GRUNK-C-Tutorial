/*
计算复利, 1年定期利率为3.3%, 转存3年后的本息和.
本息和 = x(1+3.3%)^3.
*/

#include <stdio.h>
int main() {
	int x;
	printf("请输入本金: ");
	scanf("%d", &x);
	double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
	printf("3年后的本息和为%f.\n", amount);
}