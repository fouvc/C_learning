#include<stdio.h>
//ʵ����������������
//void swap(int x, int y)
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);		a=10,b=20
//	swap(a, b);
//	printf("a=%d,b=%d\n", a, b);		a=10,b=20
//	return 0;
//}
//���Ϻ����޷�ʵ��ԭ����xy�ĵ�ַ��ab�ĵ�ַ��ͬ����ʹ�ı���xyҲ��Ӱ��ab

void swap(int* x,int* y)//�β�
{
	int tem = 0;
	tem = *x;
	*x = *y;
	*y = tem;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);		
	swap(&a, &b);//ʵ��
	printf("a=%d,b=%d\n", a, b);		
	return 0;
}