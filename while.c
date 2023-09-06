#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF文件结束标志，按住ctrl+z可结束
	{
		if (ch < '0' || ch>'9')//只打印字符0-9之间的
			continue;
		putchar(ch);
	}
	return 0;
}