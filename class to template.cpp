#include<iostream>
using namespace std;

template<class T>
class Arthamatic{
private:
    T a;
    T b;
public:
    Arthamatic(T a,T b);
    T add();
    T sub();
        
};
 template<class T>
 Arthamatic<T>::Arthamatic(T a,T b){
    this->a=a;
    this->b=b;
    
}
template<class T>
T Arthamatic<T>:: add(){
        T c;
        c=a+b;
        return c;
    }
template<class T>
T  Arthamatic<T>::sub(){
        T c;
        c=a-b;
        return c;
    }
int main(){
    Arthamatic<float> ar(10.9,5);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;
    return 0;

}