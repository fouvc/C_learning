#include<stdio.h>
//�����ķ�ʽ
//void MAX(int x, int y)
//{
//	if (x >= y)
//	{
//		return printf("���ֵ��%d", x);
//	}
//	else
//		return printf("���ֵ��%d", y);
//}
//�������ʽ exp1? exp2:exp3 -->���exp1Ϊ�棬ִ��exp2������ִ��exp3
//��ķ�ʽ
#define MAX(X,Y)  (X>Y? X:Y)
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);
	int max=MAX(num1, num2);//�൱��max=(x>y?x:y)
	printf("���ֵ��%d\n", max);
	return 0;
}