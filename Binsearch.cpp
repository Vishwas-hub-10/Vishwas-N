#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;
struct Array{
    int arr[10];
    int size;
    int length=0;
};
int display(struct Array *a){
    for(int i=0;i<a->length;i++){
        printf("%d",a->arr[i]);
        printf(" ");

    }
}

int binsearch(struct Array a, int key){
    int l,h,mid;
    l=0;
    h=a.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key ==a.arr[mid])
        {
            return mid;
        }
        else if(key <a.arr[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;

}
int  Rbinsearch(int a[],int key , int l,int h){
    int mid;
    if(l<=h){
         mid=(l+h)/2;
        if(key == a[mid]){
            return mid;
        }
        else if(key < a[mid]){
           return  Rbinsearch(a,key,l,mid-1);
        }
        else{
           return  Rbinsearch(a,key,mid+1,h);
        }
    }
    
    return -1;
}

int main(){
    struct Array a={{12,20,23,26,27,29,34,37,54,99},10,10};
    printf("%d =search value present at the indes %d",29,binsearch(a,20));
    printf("\n");

    printf("%d",Rbinsearch( a.arr,54,0,a.length-1));
    //display(&a);
    return 0;

}