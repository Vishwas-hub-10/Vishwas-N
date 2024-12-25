#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breath;
};

int main()
{
    int *p1;
    char *p2;
    double *p3;
    float *p4;
    struct rectangle *p5;
    cout<<sizeof(*p1)<<endl;
     cout<<sizeof(*p2)<<endl;
      cout<<sizeof(*p3)<<endl;
       cout<<sizeof(*p4)<<endl;
       cout<<sizeof(*p5)<<endl;
       
}
