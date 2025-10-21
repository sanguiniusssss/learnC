//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    char c=0;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case '+':
        {
            printf("%d\n",a+b);
            break;
        }
        case'-':
        {
            printf("%d\n",a-b);
            break;
        }
        case'*':
        {
            printf("%d\n",a*b);
            break;
        }
        case'/':
        {
            if(b!=0)
            {
                printf("%.1f\n",(float)a/b);
            }
            break;
        }
        default:
        break;
    }
    return 0;
}
