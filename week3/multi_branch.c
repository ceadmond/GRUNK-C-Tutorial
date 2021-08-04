//常规方式需逐一判断
/*
#include <stdio.h>
int main()
{
	int type;
	scanf("%d", &type);

	if (type == 1)
	{
		printf("您好");
	}
	else if (type == 2)
	{
		printf("早上好");
	}
	else if (type == 3)
	{
		printf("晚上好");
	}
	else if (type == 4)
	{
		printf("再见");
	}
	else
	{
		printf("啊，什么啊？");
	}

	return 0;
}
*/

//switch-case
/*
switch (控制表达式) {
case 常量:
	语句
	........
case 常量:
	语句
	........
default 常量:
	语句
	........
}
#1 控制表达式只能是整数型的结果
#2 常量可以是常数, 也可以是常数计算的表达式
*/

#include <stdio.h>
int main()
{
	const int MRN = 2;
	int type;

	scanf("%d", &type);

	switch (type) {
	case 1:
		printf("您好");
		break;
	case 2:
		printf("早上好");
		break;
	case 3:
		printf("晚上好");
		break;
	case 4:
		printf("再见");
		break;
	default:
		printf("啊，什么啊？");
		break;
	}
	return 0;
}