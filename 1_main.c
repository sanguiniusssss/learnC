//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	int* p = &a;
	*p += 10;
	printf("%d,%d", a, *p);
	return 0;
}
