#include<stdio.h>
//实现两个数交换内容
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
//以上函数无法实现原因是xy的地址与ab的地址不同，即使改变了xy也不影响ab

void swap(int* x,int* y)//形参
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
	swap(&a, &b);//实参
	printf("a=%d,b=%d\n", a, b);		
	return 0;
}