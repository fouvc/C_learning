#include<stdio.h>
//									pa本质上是指针
int  is_Binary_lookup(int pa[],int n, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		 int mid = (left + right) / 2;
		if (n > pa[mid])
		{
			left = mid + 1;
		}
		else if (n < pa[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,3,5,6,7,8,9,10 };
	int i = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//										arr实际是第一个元素的地址
	int ret=is_Binary_lookup(arr,i,sz);
	if (ret != 0)
	{
		printf("找到了，下标是%d\n", ret);
	}
	else
		printf("没有找到");
	return 0;
}
