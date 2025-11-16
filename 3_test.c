//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
void swap(int* a,int*b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d %d", &x,&y);
	swap(&x,&y);
	printf("%d %d", x,y);

	return 0;
}
