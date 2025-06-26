#include<stdio.h>
void TOH(int n,int A,int B,int C); 
int main(){
    int A=1,B=2,C=3,n;
    printf("enter the values of n");
    scanf("%d",&n);
    TOH(n,A,B,C);
    return 0;

}
void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("FROM DISK %d MOVE %d\n",A,C);
        TOH(n-1,B,A,C);
    }
}