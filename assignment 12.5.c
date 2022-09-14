#include <stdio.h>
void evennatural(int);
int main()
{
    int n,p;
    printf("enter a natural number");
    scanf("%d",&n);
    p=2*n;
    evennatural(p);
    return 0;
}
void evennatural(int p)
{
    if(p==0)
    return;
    evennatural(p-2);
    printf("%d\n",p);
}