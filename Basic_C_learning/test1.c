#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ����stdio.h���ļ�
//std��standar��i��input��o��output
//#include<stdio.h>
//mainǰ���int��ʾmain�������÷���һ������ֵ
/*
int main()//������-��������-main�������ҽ���һ��
{
	printf("hello,world\n");
	return 0;//��������0
}
*/
/*
char		�ַ���������	%c,�ַ�����%s
short		������				%d
int		����					
long		������				
long long ��������
float		������				%f
double	˫����				%lf
*/
/*
int main()
{
	//char ch = 'A';
	//printf("%c\n",ch);		//%c--��ӡ�ַ���ʽ������
	int age = 20;
	printf("%d\n", age);		//%d--��ӡ����ʮ��������
	return 0;
}
*/

//���ֲ�������ȫ�ֱ����ı�������ͬʱ���ֲ���������
//int main()
//{
//	printf("%d\n", sizeof(char));				//1-��ʾ�ڴ��СΪ1��byte��8��bit����Χ��0~2^8-1
//	printf("%d\n", sizeof(short));				//2
//	printf("%d\n", sizeof(int));					//4
//	printf("%d\n", sizeof(long));				//4
//	printf("%d\n", sizeof(long long));		//8
//	printf("%d\n", sizeof(float));				//4
//	printf("%d\n", sizeof(double));			//8
//	return 0;
//}

/*
�ֲ��������������Ǿֲ���Χ
ȫ�ֱ���������������������
�ֲ�����������������������
ȫ�ֱ���������������������������
*/
int main()
{
	//��������֮��
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);	//&��ʾȡ��ַ
	int sum = 0;
	sum = num1 + num2;
	printf("sum=%d\n",sum);
	return 0;
}