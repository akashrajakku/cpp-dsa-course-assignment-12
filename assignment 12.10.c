#include <stdio.h>
void rev(int len,int t[len]);
int main() 
{
    int len,i;
   printf("enter size of number: ");
   scanf("%d",&len);
   printf("Enter the number: ");
   int a[len];
   for(i=1;i<=len;i++)
   scanf("%d",&a[i]);
   printf("Reverse of the entered number is :");
   rev(len,a);
   return 0;
}
void rev(int len,int t[len])
{
    if(len==0)
    return ;
    else
    printf("%d",t[len]);
    rev(len-1,t);

}