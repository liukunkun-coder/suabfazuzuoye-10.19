#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//生成一个包含10个随机整数的数组
//1.定义一个种子
//封装为函数；冒泡排序
void maopao(int number[], int len)
{
    for (int t = 0; t <= len - 1; t++)
    {
        for (int n = t; n <= len - 2; n++)
        {
            int temp;
            if (number[t] >= number[n + 1])
            {
                temp = number[t];
                number[t] = number[n + 1];
                number[n + 1] = temp;
            }
        }
    }
}
//封装为函数 选择排序
void xuanze(int number[], int len)
{
    for (int x = 0; x <= 9; x++)
            {
                for (int j = 0; j <= len - 2-x; j++)
                {
                    if (number[j] > number[j + 1])
                    {
                        int temp = number[j + 1];
                        number[j + 1] = number[j];
                        number[j] = temp;
        
                    }
                }
        
            }
}


int main()
{
    srand(time(NULL));
    int number[10] = { 0 };
    for (int i = 0; i <= 9;i++ )
    {
    
        number[i] = rand()%100;
        printf("%d\n", number[i]);
    }
////用冒泡排序对数组进行升序排列
////首先计算数组的长度
    int len = sizeof(number) / sizeof(number[0]);
    printf("--------\n");
    printf("%d\n\n", len);
////为什么必须是len-2：

//用选择排序对数组进行排序
     maopao( number, len);
    
    

    printf("------------\n");
    for (int i = 0; i <= 9; i++)
        {
            printf("%d\n", number[i]);
        }
     
    return 0;
}