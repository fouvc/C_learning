#include<stdio.h>
//static修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量
//改变全局变量的作用域，只能让他在自己的内部使用
//static修饰函数
//改变函数的链接属性
void test()
{
	//int a = 1;使用此行代码a的结果为2
	static int a = 1;//a是一个静态局部变量,此时每次执行test()时a不必从1开始取，a的结果为2，3，4，5，6。
							//也就是出了作用域a不会被销毁，不会重新从1开始取
	a++;
	printf("a=%d\n", a);
}
//声明外部函数
extern int add(int , int );
int main()
{
	//extern int g_val;//extern--声明外部符号的
	int a = 1;
	int b = 2;
	int i = 0;
	while (i < 5)
	{
		add(a, b);
		test();
		i++;
		//printf("g_val=%d\n", g_val);
	}
	return 0;

}
