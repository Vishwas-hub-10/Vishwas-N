#include<iostream>
using namespace std;
//returning function returning an array
int * fun(int size){
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;

}
int main(){
    int *ptr,siz=5;
    ptr=fun(siz);
    for(int i=0;i<siz;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}