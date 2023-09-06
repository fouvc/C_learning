#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//包含一个叫stdio.h的文件
//std：standar，i：input，o：output
//#include<stdio.h>
//main前面的int表示main函数调用返回一个整型值
/*
int main()//主函数-程序的入口-main函数有且仅有一个
{
	printf("hello,world\n");
	return 0;//返回整型0
}
*/
/*
char		字符数据类型	%c,字符串是%s
short		短整型				%d
int		整型					
long		长整型				
long long 更长整型
float		单精度				%f
double	双精度				%lf
*/
/*
int main()
{
	//char ch = 'A';
	//printf("%c\n",ch);		//%c--打印字符格式的数据
	int age = 20;
	printf("%d\n", age);		//%d--打印整型十进制数据
	return 0;
}
*/

//当局部变量和全局变量的变量名相同时，局部变量优先
//int main()
//{
//	printf("%d\n", sizeof(char));				//1-表示内存大小为1个byte（8个bit）范围是0~2^8-1
//	printf("%d\n", sizeof(short));				//2
//	printf("%d\n", sizeof(int));					//4
//	printf("%d\n", sizeof(long));				//4
//	printf("%d\n", sizeof(long long));		//8
//	printf("%d\n", sizeof(float));				//4
//	printf("%d\n", sizeof(double));			//8
//	return 0;
//}

/*
局部变量的作用域是局部范围
全局变量的作用域是整个工程
局部变量的生命周期是作用域
全局变量的生命周期是整个程序周期
*/
int main()
{
	//计算两数之和
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);	//&表示取地址
	int sum = 0;
	sum = num1 + num2;
	printf("sum=%d\n",sum);
	return 0;
}