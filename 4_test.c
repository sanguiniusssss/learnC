//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        printf("可以组成三角形");
    }
    else
    {
        printf("不能组成三角形");
    }
    return 0;
}
