#include<stdio.h>
#include<string.h>
//int main()
//{
//	//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = {1,2,3};
//	char arr2[5] = { 'a','b' };
//	char arr3 = "ab";//��������'\0',����Ĭ��0
//	char arr4[] = "abcdef";//���ݳ�ʼ�������������������˴�Ϊ7��Ԫ��(����\0)
//	char ar1[] = "abc";
//	char ar2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr4));//sizeof����arr4��ռ�ռ��С-7*1=7
//	printf("%d\n", strlen(arr4));//strlen���ַ������ȣ�����\0ֹͣ-=6
//	printf("%d\n", sizeof(ar1));//4
//	printf("%d\n", sizeof(ar2));//3
//	printf("%d\n", strlen(ar1));//3
//	printf("%d\n", strlen(ar2));//���ֵ,ֱ������\0
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}


//��ά����
int main()
{
	//3��4��,Ĭ�ϴ��
	//int arr1[3][4] = {1,2,3,4,5};1234�ڵ�һ�У�5�ڵڶ���
	// //����ʡ�ԣ��в���
	//int arr3[][4] = { {1,2,3,4},{5,6,7,8} };
	//3��4��,��Ϊһά����
	int arr2[3][4] = { {1,2,3},{4,5} };//123�ڵ�һ�У�45�ڵڶ���
	int i = 0;
	for (i; i < 3; i++)
	{
		int j = 0;
		for (j; j < 4; j++)
		{
			printf("&arr2[%d][%d]=%p\n",i,j, &arr2[i][j]);
		}
	}
	
	return 0;
}