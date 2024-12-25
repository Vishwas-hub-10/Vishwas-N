#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int l;
    int b;
};
//pass by value
/*void fun(struct rectangle rect){
    rect.l=20;
    cout<<"lenght="<<rect.l<<"\n"<<"breath="<<rect.b<<endl;
}
int main(){
    struct rectangle r={10,5};
    fun(r);
    cout<<"lenght="<<r.l<<"\n"<<"breath="<<r.b<<endl;
    return 0;

}*/
//pass by adress
/*void fun(struct rectangle *p){
    p->l=20;
    cout<<"lenght="<<p->l<<"\n"<<"breath="<<p->b<<endl;
}
int main(){
    struct rectangle r={10,5};
    fun(&r);
    cout<<"lenght="<<r.l<<"\n"<<"breath="<<r.b<<endl;
    return 0;

}*/
struct rectangle *fun(){
    struct rectangle *p;
    p=new rectangle;
    //p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->l=15;
    p->b=2;
 return p;
}
 int main(){
    struct rectangle *ptr=fun();
    cout<<"length"<<ptr->l<<"\n"<<"breath"<<""<<ptr->b<<endl;
 }
