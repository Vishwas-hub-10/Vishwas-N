#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breath;
    public:
    Rectangle(){
        length=0;
        breath=0;
    }
    Rectangle(int l,int b)
    {
        length=l;
        breath=b;
    }
    int area(){
        return length*breath;
    }
    int peri(){
        return 2*(length+breath);
    }
    void setlength(int l){
        length=l;
    }
    int getlength(){
        return length;
    }
    ~Rectangle(){ cout<<"destructor";}
};
int main(){
    Rectangle  r(10,50);
    cout<<"area="<<r.area()<<endl;
    cout<<"perimeter="<<r.peri()<<endl;
    return 0;
}