#include <stdio.h>
void sqr(int);
int main() {
    int n;
   printf("enter a number: ");
   scanf("%d",&n);
   sqr(n);
   return 0;
}
void sqr(int n)
{
    if(n==0)
    return ;
    else
    sqr(n-1);
    printf("%d\n",n*n);
   
}