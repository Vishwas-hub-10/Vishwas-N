#include<stdio.h>
int main()
{
    int i;
    char str[]="decimal";
    char str1[]="medical";
    int H[26]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        H[str[i]-97]++;

    }
    for(int i=0;str1[i]!='\0';i++)
    {
        H[str1[i]-97]--;
    }
    if(H[i]<0)
    {
        printf("Not anagram");
    }    
    else
    {
        printf("Anagram");
    }
    return 0;
}