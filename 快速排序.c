
#include<stdio.h>//最小K个数；基于数组的第k个数字来调整，使得比第k个数字小的所有数字都位于数组的左边
//比第k个数字大的所有数字都位于数组的右边。调整之后，位于数组左边的k个数字就是最小的k个数字//
int partition(int a[], int low, int high);//声明函数partition
int main()
{
	int a[9] = { 5,7,1,4,3,9,8,6,2};//定义数组a【i】
	partition(a,0,8);
	for (int i = 0; i <= 8; i++)
		printf("%d", a[i]);//循环打印数组a【i】
	return 0;
}
int partition(int a[], int low, int high)//定义函数partition
{
	int b = a[low];//第一个记录作为枢轴(也可是在begin和end之间的随机数)
	int i = low;
	int j = high;
	while (i < j)
	{
		while (i < j && a[j] >= b)
			j--;
		a[i] = a[j];//尾部找到小于pivot的值,移到低端
		while (i < j && a[i] <= b)
			i++;
		a[j] = a[i];//头部找到大于pivot的值,移到高端
	}
	a[j]= b;//枢轴基准归位
	return j;//递归 
}