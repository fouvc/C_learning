//int g_val = 2023;//全局变量，如果加了static修饰，则改变了作用域
int add(int x, int y)//若用static修饰函数，和全局变量一样改变作用域
{
	return printf("sum=%d\n",x+y);
}