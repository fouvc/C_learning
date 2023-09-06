#include<stdio.h>
void Bubbling_sorting(int arr[],int sz)
{
	int i =0;
	int m = 0;
	//确定冒泡的趟数，n个元素有n-1趟
	for (i=sz-1; i>0;i--)
	{
		int flag = 1;//假设这一趟已经有序
		//每一趟冒泡排序
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
	//arr是数组，对数组进行传参实际上传过去的数组arr首元素的地址 &arr
	Bubbling_sorting(arr,sz);
	return 0;
}