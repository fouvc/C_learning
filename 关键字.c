#include<stdio.h>
//static���ξֲ�����
//�ֲ��������������ڱ䳤
//static����ȫ�ֱ���
//�ı�ȫ�ֱ�����������ֻ���������Լ����ڲ�ʹ��
//static���κ���
//�ı亯������������
void test()
{
	//int a = 1;ʹ�ô��д���a�Ľ��Ϊ2
	static int a = 1;//a��һ����̬�ֲ�����,��ʱÿ��ִ��test()ʱa���ش�1��ʼȡ��a�Ľ��Ϊ2��3��4��5��6��
							//Ҳ���ǳ���������a���ᱻ���٣��������´�1��ʼȡ
	a++;
	printf("a=%d\n", a);
}
//�����ⲿ����
extern int add(int , int );
int main()
{
	//extern int g_val;//extern--�����ⲿ���ŵ�
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