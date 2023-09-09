#include<stdio.h>
int main()
{
	//数组名是首元素地址
	/*int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/

	//例外
	//1.sizeof(数组名)--数组名表示的是整个数组，sizeof(数组名)计算的是整个数组大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名取出的是整个数组的地址
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}
