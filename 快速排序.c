
#include<stdio.h>//��СK��������������ĵ�k��������������ʹ�ñȵ�k������С���������ֶ�λ����������
//�ȵ�k�����ִ���������ֶ�λ��������ұߡ�����֮��λ��������ߵ�k�����־�����С��k������//
int partition(int a[], int low, int high);//��������partition
int main()
{
	int a[9] = { 5,7,1,4,3,9,8,6,2};//��������a��i��
	partition(a,0,8);
	for (int i = 0; i <= 8; i++)
		printf("%d", a[i]);//ѭ����ӡ����a��i��
	return 0;
}
int partition(int a[], int low, int high)//���庯��partition
{
	int b = a[low];//��һ����¼��Ϊ����(Ҳ������begin��end֮��������)
	int i = low;
	int j = high;
	while (i < j)
	{
		while (i < j && a[j] >= b)
			j--;
		a[i] = a[j];//β���ҵ�С��pivot��ֵ,�Ƶ��Ͷ�
		while (i < j && a[i] <= b)
			i++;
		a[j] = a[i];//ͷ���ҵ�����pivot��ֵ,�Ƶ��߶�
	}
	a[j]= b;//�����׼��λ
	return j;//�ݹ� 
}