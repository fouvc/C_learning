#include<stdio.h>
//switch������������ͱ��ʽ
//case������������ͳ������ʽ
//default����Ƿ�
//�����Ƕ�׵�switch�У�break����������ǰ��switch���
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("�������");
		break;
	}
	return 0;
}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	switch (num)
//	{
//	case 1:		
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	}
//	return 0;
//}