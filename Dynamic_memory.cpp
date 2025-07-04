#include<iostream>
#include<conio.h>

#include<stdio.h>
/**int main(){
    int *p;
    p=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<10;i++){
        printf("%d",*(p+i));
        printf("\n");
    }
    free(p);
}
**/
int main(){
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=10;p[1]=32;p[3]=45;p[4]=69;p[2]=78;
    int *q;
    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;

    for(int i=0;i<5;i++){
        printf("%d",*(p+i));
        printf("\n");
    }

}