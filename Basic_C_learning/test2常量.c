//һ����Ŀ��Ŷ��Դ�ļ����ж��main�������༭����֪���ĸ����У����н�����Ҫ��Դ�ļ������Դ��������ų���
//������Ϊ���泣����const���εı䳣����#define����ı�ʶ��������ö�ٳ���
//ö�ٹؼ���-enum
#include<stdio.h>
#define MAX 10
enum SEX
{
	MALE,
	FAMALE,
};
//MALE,FAMALE-ö�ٳ��� 
int main()
{

	3;//�������
	int num = 4;
	//const������
	//const��ʾ���γ�����
	const int num1 = 3;//��ʾ����num1��ֵ���ᷢ���仯
	num = 8;
	printf("%d\n", num);
	printf("%d\n", num1);
	printf("%d\n", MAX);//#define����ı�ʶ������
	printf("%d\n", MALE);//��ӡö�ٳ���
	printf("%d\n", FAMALE);
	return 0;
}