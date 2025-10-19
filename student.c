#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//键盘录入学生的人数，学生成绩
//函数用来求平均值
double average (int num[], int n)
{
   double sum = 0;
    for (int a = 0; a <= n; a++)
    {
        sum = sum + num[a];

    }
    double math_average = sum / n;
    return  math_average;
}
//定义一个求最大的分数
double max_number(int* scores, int n)
{
    //临时变量用来存储临时max
    int max = *scores;
    int* temp = scores+1;
    for (int i=1;i<n;i++)
    {
        if (*temp>max)
        {
            max = *temp;
        }
        temp++;
    }
    return max;
}
double min_number(int* scores, int n)
{
    //临时变量用来存储临时max
    int min = *scores;
    int* temp = scores + 1;
    for (int i = 1; i < n; i++)
    {
        if (*temp < min)
        {
            min = *temp;
        }
        temp++;
    }

    return min;
}
    //反选择排序
void function(int *scores, int n)
{
    for (int t = 0; t <= n - 2; t++)
    {
        for (int m = t; m <= n - 2; m++)
        {
            if (*(scores + t) <= *(scores + 1 + m) )
            {
                int temp;
                temp = *(scores + t);
                *(scores + t) = *(scores + m + 1);
                *(scores + m + 1) = temp;
            }

        }
    }
    }
    


int main()
{
    int n;
    printf("请输入要录入的学生人数\n");
    scanf("%d", &n);
    int  scores[50] = { 0 };
    printf("请依次输入学生的成绩\n");
    if (n == 0)
    {
        printf("没有学生，无法计算平均分和最高分\n");
        return 0;
    }
    else
    {
        int* p = scores;
        for (int i = 0; i <= n - 1; i++)
        {
            scanf("%d", &*p);
            p++;
        }
        //计算平均数
        double num = average(scores, n);
        printf("%d个学生的平均数是%f", n, num);
    }    //求最大值
    double g;
        g= max_number(scores, n);
    printf("小屁孩中的最大分数是%.2f\n", g);
    //求最小值
    double d;
        d= min_number(scores, n);
    printf("小屁孩中的最小分数是%.2f\n", d);
    //按照从大到小的顺序输出成绩
    function(scores, n);
    printf("成绩降序排列\n");
    for (int z = 0; z <= n-1; z++)
    {
        printf("%d\n", scores[z]);

    }
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;
    int count_d = 0;
    int count_e = 0;
    for (int q = 0; q <= n - 1; q++)
    {
        switch (scores[q] / 10)
        {
        case 10:
        case 9:
            count_a = count_a + 1;
            break;
        case 8:
            count_b = count_b + 1;
            break;
        case 7:
            count_c = count_c + 1;
            break;
        case 6:
            count_d = count_d + 1;
            break;
        default:
            count_e = count_e + 1;

        }

    }
    printf("等级统计");
    printf("优秀（90~100）：%d\n", count_a);
    printf("良好（80~89）：%d\n", count_b);
    printf("中等（70~79）：%d\n", count_c);
    printf("及格（60~69）：%d\n", count_d);
    printf("不及格（0~59）：%d\n", count_e);
    return 0;
}