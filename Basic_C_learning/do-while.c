#include<stdio.h>
int main()
{
	int i = 1;
	do//先执行依次do中的语句，再判断，如果为真则再次执行，反之
	{
		printf("%d ", i);
		i++;
	} while (i<=10);
	return 0;
}