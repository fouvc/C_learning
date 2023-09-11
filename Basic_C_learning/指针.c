#include<stdio.h>
//指针大小在32位平台上是4个字节，在64位上是8个字节
int main()
{
	int a = 10;//4个字节
	int* p = &a;//&:取地址符，用来取a的地址,有一种变量用来存放地址的-指针变量
	//printf("%p\n", &a);//打印地址用%p
	//printf("%p\n", p);
	*p = 20;//*-解引用操作符/间接访问操作符
	printf("a=%d\n", a);
	printf("%d\n", sizeof(p));
	return 0;
}