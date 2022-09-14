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
    printf("%d\n",p);
    evennatural(p-2);
    
}