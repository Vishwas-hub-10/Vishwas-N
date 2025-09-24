#include<stdio.h>
int main(){
    char str[10];
    char t;
    gets(str);
    printf("orginal string:");
    puts(str);
    int i,j;
    for( i=0;str[i]!='\0';i++)
    {
    }
    i=i-1;
    for( j=0;j<i;j++,i--)
    {
        t=str[j];
        str[j]=str[i];
        str[i]=t;

    }
    printf("reversed string is\n");
    puts(str);
    return 0;
}