#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a; 
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<p<<endl;//adress
    cout<<*p<<endl;
    cout<<&p<<endl;
    return 0;

}