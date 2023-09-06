#include<stdio.h>
//if与最近的esle匹配
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
		printf("hehe\n");
	return 0;
}


//判断1-100之间的奇数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	//一个if对应一个esle
//	int age=0 ;
//	scanf_s("%d", &age);
//	if (age < 10)
//		printf("儿童\n");
//	else if (age >= 10 && age <= 18)
//		printf("青年\n");
//	else if (age > 18 && age <= 50)
//		printf("成年\n");
//	else
//		printf("老年\n");
//	return 0;
//}


//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是奇数\n",num);
//	else
//		printf("%d是偶数\n",num);
//	return 0;
//}