//�ṹ�������������Ӷ������ˣ���...���������ǿ����Լ���������
//�飺����+����+������+����+���....
//�ˣ�����+���+�Ա�+���֤��.....
//����һ���ṹ������
#include<stdio.h>
struct Book
{
	char name[20];//�����������
	short price;//������ż۸�
};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b = { "c���Գ������",55 };
//	printf("����:��%s��\n", b.name);
//	printf("�۸�:%dԪ\n", b.price);
//	b.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b.price);
//	return 0;
//}
//����ָ��
int main()
{
	struct Book b = { "c���Գ������",55 };
	struct Book* pd = &b;
	//��������
	/*printf("����:��%s��\n", (*pd).name);
	printf("�۸�:%dԪ\n", (*pd).price);*/
	//Ҳ��������
	printf("����:%s\n", pd->name);
	printf("�۸�:%d\n", pd->price);
	return 0;
}