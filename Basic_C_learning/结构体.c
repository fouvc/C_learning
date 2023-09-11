//结构体用来描述复杂对象，如人，书...，这样我们可以自己创建类型
//书：书名+作者+出版社+定价+书号....
//人：姓名+身高+性别+身份证号.....
//创建一个结构体类型
#include<stdio.h>
struct Book
{
	char name[20];//用来存放书名
	short price;//用来存放价格
};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b = { "c语言程序设计",55 };
//	printf("书名:《%s》\n", b.name);
//	printf("价格:%d元\n", b.price);
//	b.price = 15;
//	printf("修改后的价格:%d元\n", b.price);
//	return 0;
//}
//利用指针
int main()
{
	struct Book b = { "c语言程序设计",55 };
	struct Book* pd = &b;
	//可以这样
	/*printf("书名:《%s》\n", (*pd).name);
	printf("价格:%d元\n", (*pd).price);*/
	//也可以这样
	printf("书名:%s\n", pd->name);
	printf("价格:%d\n", pd->price);
	return 0;
}