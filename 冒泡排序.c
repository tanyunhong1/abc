#include<stdio.h>//�ɴ��Ƴ�������� n ��������Ҫ���� n - 1 �˱Ƚϡ��ڵ�һ�˱Ƚ���Ҫ���� n - 1 �������Ƚϣ��ڵ� j �˱Ƚ���Ҫ���� n - j �������Ƚϡ�
2 int main()
3 {
4     int a[10];
5     int i, j, t;
6     printf("input 10 numbers :\n");//���� 
7     for (i = 0; i < 10; i++)         //���� 
8         scanf("%d", &a[i]);         //a[0]~a[9] 
9     printf("\n");10     for (j = 0; j < 9; j++)
11        for (i = 0; i < 9 - j; i++)  //ð������ 
12         if (a[i] > a[i + 1])        //�����㷨 ,����˳��
13       
{1              t = a[i];
15             a[i] = a[i + 1];
16       a[i + 1] = t      }
18     printf("the sorted numbers :\n");
19     for (i = 0; i < 10; i++)      //��� ��
20         printf("%d ", a[i]);     //���� 
21    printf("\n")��
22     return 0;
23 }







