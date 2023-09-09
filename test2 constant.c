//一个项目里放多个源文件会有多个main函数，编辑器不知从哪个进行，所有将不需要的源文件在属性从生成中排除掉
//变量分为字面常量，const修饰的变常量，#define定义的标识符常量，枚举常量
//枚举关键字-enum
#include<stdio.h>
#define MAX 10
enum SEX
{
	MALE,
	FAMALE,
};
//MALE,FAMALE-枚举常量 
int main()
{

	3;//字面变量
	int num = 4;
	//const常属性
	//const表示修饰常变量
	const int num1 = 3;//表示变量num1的值不会发生变化
	num = 8;
	printf("%d\n", num);
	printf("%d\n", num1);
	printf("%d\n", MAX);//#define定义的标识符常量
	printf("%d\n", MALE);//打印枚举常量
	printf("%d\n", FAMALE);
	return 0;
}
