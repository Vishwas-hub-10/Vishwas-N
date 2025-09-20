#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int length;
    int size;
};
struct Array* Merge(struct Array *a1,struct Array *a2){
    int i=0,j=0,k=0;
    struct Array *a3=(struct Array *)malloc(sizeof(struct Array));
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k++]=a1->A[i++];
        }
        else{
            a3->A[k++]=a2->A[j++];
        }

    }
    for(;i<a1->length;i++){
        a3->A[k++]=a1->A[i];
    }
    for(;j<a1->length;j++){
        a3->A[k++]=a2->A[j];
    }
    a3->length=a1->length+a2->length;
    a3->size=a1->size+a2->size;
    return a3;

}
int display(struct Array *a3){
    for(int i=0;i<a3->length;i++)
    {
        printf("%d",a3->A[i]);
        printf(" ");
    }
}
int main(){
    struct Array a1={{1,4,6,9,11,15},6,10};
    struct Array a2={{2,5,8,10,12,14},6,10};
    struct Array *a3;
    a3=Merge(&a1,&a2);
    display(a3);

}