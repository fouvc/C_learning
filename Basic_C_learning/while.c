#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF�ļ�������־����סctrl+z�ɽ���
	{
		if (ch < '0' || ch>'9')//ֻ��ӡ�ַ�0-9֮���
			continue;
		putchar(ch);
	}
	return 0;
}