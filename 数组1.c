#include<stdio.h>
#include<string.h>
//int main()
//{
//	//不完全初始化，剩下的元素默认初始化为0
//	int arr[10] = {1,2,3};
//	char arr2[5] = { 'a','b' };
//	char arr3 = "ab";//第三个是'\0',不是默认0
//	char arr4[] = "abcdef";//根据初始化长度来决定个数，此处为7个元素(包括\0)
//	char ar1[] = "abc";
//	char ar2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr4));//sizeof计算arr4所占空间大小-7*1=7
//	printf("%d\n", strlen(arr4));//strlen求字符串长度，遇到\0停止-=6
//	printf("%d\n", sizeof(ar1));//4
//	printf("%d\n", sizeof(ar2));//3
//	printf("%d\n", strlen(ar1));//3
//	printf("%d\n", strlen(ar2));//随机值,直到遇到\0
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


//二维数组
int main()
{
	//3行4列,默认存放
	//int arr1[3][4] = {1,2,3,4,5};1234在第一行，5在第二行
	// //行能省略，列不可
	//int arr3[][4] = { {1,2,3,4},{5,6,7,8} };
	//3行4列,视为一维数组
	int arr2[3][4] = { {1,2,3},{4,5} };//123在第一行，45在第二行
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