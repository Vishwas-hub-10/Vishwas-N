#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void find_duplicates(struct Array *a);
struct Array{
    int *arr;
    int size=0;
    int length=0;
};
void display(struct Array *a){
    for(int i=0;i<a->length;i++){
        printf("%d\t",a->arr[i]);
    }
}
int main(){
    struct Array *a;
    a= (struct Array *) malloc(sizeof(struct Array));
    printf("enter size\n");
    scanf("%d",&a->length);
    a->arr = (int *)malloc(a->size * sizeof(int));
    printf("enter the  elements\n");
    for(int i=0;i<a->length;i++){
        scanf("%d",&a->arr[i]);
        
    }
    display(a);
    find_duplicates(a);
    return 0;


    
}
void find_duplicates(struct Array *a){
    int i,j;
    for( i=0;i<a->length-1;i++){
        int count=1;
        for(j=i+1;j<a->length;j++){
            if(a->arr[i]==a->arr[j]){
                while(a->arr[i]==a->arr[j]){
                    j++;
                    count++;
                }
                printf("duplicate elements & count is %d\t %d\n",a->arr[i],count);
            }
        }
    }
}