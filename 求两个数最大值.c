#include<stdio.h>
//函数的方式
//void MAX(int x, int y)
//{
//	if (x >= y)
//	{
//		return printf("最大值是%d", x);
//	}
//	else
//		return printf("最大值是%d", y);
//}
//条件表达式 exp1? exp2:exp3 -->如果exp1为真，执行exp2，否则执行exp3
//宏的方式
#define MAX(X,Y)  (X>Y? X:Y)
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);
	int max=MAX(num1, num2);//相当于max=(x>y?x:y)
	printf("最大值是%d\n", max);
	return 0;
}