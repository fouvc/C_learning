#include<stdio.h>
void Bubbling_sorting(int arr[],int sz)
{
	int i =0;
	int m = 0;
	//ȷ��ð�ݵ�������n��Ԫ����n-1��
	for (i=sz-1; i>0;i--)
	{
		int flag = 1;//������һ���Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				m = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = m;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 3,4,1,2,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr�����飬��������д���ʵ���ϴ���ȥ������arr��Ԫ�صĵ�ַ &arr
	Bubbling_sorting(arr,sz);
	return 0;
}