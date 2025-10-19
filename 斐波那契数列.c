#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//计算第n个斐波那契数
long long fibonacci_nth(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int num;
a:    printf("请输入一个整数n，计算第n个斐波那契数列：");
    scanf("%d", &num);
    //对输入的数进行判断
    while (1)
    {
        if (num <= 0 || num >= 90)
        {
            printf("请输入0~90的整数");
            goto a;
        }
        else
        {
            break;
        }

    }


    long long result = fibonacci_nth(num);
    printf("第%d个斐波那契数是：%lld\n", num, result);
    //排列 num<8 的时候会不会执行
    if (num < 8)
    {
        for (int m = 0; m <= num; m++)
        {
            printf("%lld ", fibonacci_nth(m));
        }
    }
    else
    {
        for (int t = 1; t <= num / 8; t++)
        {
            printf("\n");
            for (int k = (num / 8 - 1) * 8; k <= (t - 1) * 8 + 8; k++)
            {
                printf("%lld ", fibonacci_nth(k));
            }
            if (num % 8 != 0);
            {
                printf("\n");
                for (int x = num / 8 * 8 + 1; x <= num; x++)
                {
                    printf("%lld ", fibonacci_nth(x));
                    printf("\n--------\n");
                }
            }
        }
    }

    //计算前n个斐波那契数的和
    long long sum = 0;
    for (int j = 1; j <= num; j++)
    {
        sum = sum + fibonacci_nth(j);

    }
    printf("前%d个斐波那契数的和是：%lld\n", num, sum);

    return 0;
}