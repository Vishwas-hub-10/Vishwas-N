#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void fun2(int n);
void fun1(int n){
    if(n>0)
    {
        printf("%d\t",n);
        fun2(n-1);
    }
}
void fun2(int n){
    if(n>1){
        printf("%d\t",n);
        fun1(n/2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun1(n);
 return 0;
}