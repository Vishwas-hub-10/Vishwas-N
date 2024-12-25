#include<iostream>
using namespace std;
int add(int a,int b)//function prototype,signature
{
    int c=a+b;
    return c;
}
int main(){
    int v=10;
    int d=20;
    int s=add(v,d);
    cout<<s<<endl;
    return 0;
}