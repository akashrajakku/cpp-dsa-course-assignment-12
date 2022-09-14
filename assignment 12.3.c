#include <stdio.h>
void oddnatural(int);
int main()
{
    int n;
    printf("enter a odd natural number");
    scanf("%d",&n);
    oddnatural(n);
    return 0;
}
void oddnatural(int a)
{
    if(a==1)
    printf("1");
    else
    {
     printf("%d\n", a);
     oddnatural(a-2);
    }
}