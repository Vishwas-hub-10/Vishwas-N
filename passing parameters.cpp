#include<iostream>
using namespace std;
//call by value
/*int add(int x,int y){

    int z=x+y;
    return z;

}

int main(){
    int a=10;
     int b=32;
     int c=add(a,b);
     cout<<"sum is"<<c;

    return 0;
}*/
//call by references
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=30,b=32;
    swap(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
//in c++ call by refrences function may become an inline