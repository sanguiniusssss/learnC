//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
    int score=0;
    scanf("%d",&score);
    if(score>=90&&score<=100)
    {
        printf("A\n");
    }
    else if(score>=80)
    {
        printf("B\n");
    }
    else if(score>=70)
    {
        printf("C\n");
    }
    else if(score>=60)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }
    return 0;
}
