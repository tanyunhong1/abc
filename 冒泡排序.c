#include<stdio.h>//由此推出，如果有 n 个数，则要进行 n - 1 趟比较。在第一趟比较中要进行 n - 1 次两两比较，在第 j 趟比较中要进行 n - j 次两两比较。
2 int main()
3 {
4     int a[10];
5     int i, j, t;
6     printf("input 10 numbers :\n");//输入 
7     for (i = 0; i < 10; i++)         //数组 
8         scanf("%d", &a[i]);         //a[0]~a[9] 
9     printf("\n");10     for (j = 0; j < 9; j++)
11        for (i = 0; i < 9 - j; i++)  //冒泡排序 
12         if (a[i] > a[i + 1])        //核心算法 ,交换顺序
13       
{1              t = a[i];
15             a[i] = a[i + 1];
16       a[i + 1] = t      }
18     printf("the sorted numbers :\n");
19     for (i = 0; i < 10; i++)      //输出 ；
20         printf("%d ", a[i]);     //数组 
21    printf("\n")；
22     return 0;
23 }







