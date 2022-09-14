#include <stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter a natural number");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int a)
{
    if(a==1)
    printf("1");
    else
    {
     printf("%d\n",a);
    natural(a-1);
   
    }
    
}