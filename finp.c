#include<stdio.h>
int main()
{
   int a;
   int b;
   printf("enter the value of a");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("%d+%d=%d",a,b,a+=b);
   return 0;
}