#include<iostream>
using namespace std;
void fun(int A[ ],int n){//int *A{//we cannoot use the for each loop on the pointeer
   /*cout<<sizeof(A)/sizeof(int)<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" "<<endl;}*/

    A[0]=200;
}
int main()
{
    int A[]={2,3,5,9,1};
    int n=5;
    fun(A,n);
    cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A)
    {
        cout<<x<<" ";
    }

    return 0;
}