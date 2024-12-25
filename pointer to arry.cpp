#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    int*p;
    //in c language
   /* p=(int *)malloc(5*sizeof(int));
    p[0]=20,p[1]=2,p[2]=12,p[3]=1,p[4]=11;*/
    //in c++
    p=new int[5];
    p[0]=20,p[1]=9,p[2]=11,p[3]=100,p[4]=11;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;

    }
    delete[] p;
   // free(p);//in heep memory is deleted
}