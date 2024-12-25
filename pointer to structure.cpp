#include<iostream>
using namespace std;
struct rectangle{
    int b;
    int l;
};
int main()
{ 
   /*struct rectangle r={10,5};//in c++ we can remove the struct it is valid but not in c (its shows error)
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    rectangle *p=&r;
    cout<<p->l<<endl;
    cout<<p->b<<endl;*/
   //dynamically creating an pointer in structure
   rectangle *p;
   p=(struct rectangle*)malloc(sizeof(struct rectangle));//in c
   p=new rectangle;
   p->l=100;
   p->b=200;
   cout<<p->l<<endl;


}