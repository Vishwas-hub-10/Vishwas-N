#include<stdio.h>
#include<iostream>
using namespace std;
int fact(int n);
int nCr(int n,int r);
int NCR(int n,int r);

int main(){
    printf("%d\n",nCr(12,9));
    printf("%d\n",NCR(12,9));
    return 0;

}
int NCR(int n,int r){
    if(n==r || r==0){
        return 1;
    }
    else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return  n*fact(n-1);
    }
}
int nCr(int n,int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}