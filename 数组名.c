#include<stdio.h>
int main()
{
	//����������Ԫ�ص�ַ
	/*int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/

	//����
	//1.sizeof(������)--��������ʾ�����������飬sizeof(������)����������������С����λ���ֽ�
	//2.&�������������������������飬&������ȡ��������������ĵ�ַ
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}