#include <stdio.h>
#include <stdlib.h>

struct flex {
    size_t count;
    double average;
    double scores[]; // 伸缩型数组成员
};

void showFlex(struct flex * p);


int main(void)
{
    struct flex * pf1, * pf2;
    int n = 5;
    int i;
    int tot = 0;

    pf1 = malloc(sizeof(struct flex) + n * sizeof(double)); // 动态分配内存
    pf1->count = n; // 在结构中存储伸缩数组长度
    for (i = 0; i < n; i++)
    {   
        // 给伸缩数组每个元素赋值
        pf1->scores[i] = 20.0 - i;
        tot += pf1->scores[i];
    }
    pf1->average = tot / n; // 计算平均数

    n = 9;
    tot = 0;
    pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
    pf2->count = n;
    for (i = 0; i < n; i++)
    {
        pf2->scores[i] = 20.0 - i;
        tot += pf2->scores[i];
    }
    pf2->average = tot / n;

    // 输出两个结构变量的内容
    showFlex(pf1);
    showFlex(pf2);

    // 动态分配内存推荐手动释放
    free(pf1);
    free(pf2);

    return 0;
}


void showFlex(struct flex * p)
{
    int i;
    
    printf("Scores: ");
    for (i = 0; i < p->count; i++)
        printf("%g", p->scores[i]);
    printf("\nAverage: %g\n", p->average);
}