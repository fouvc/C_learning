#include<stdio.h>
//switch后面必须是整型表达式
//case后面必须是整型常量表达式
//default处理非法
//如果在嵌套的switch中，break用于跳出当前的switch语句
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("输入错误");
		break;
	}
	return 0;
}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	switch (num)
//	{
//	case 1:		
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期七");
//		break;
//	}
//	return 0;
//}
