#include<stdio.h>
#include"add.h"
#include"add.c"

int main(){
    int num=0;
    int n=0;
    // int* np;
    // n=*np;
    scanf("%d",&n);

    // printf("num is %d",n);
    // num_add(&num);
    // printf("num is %d",num);
    // num_add(&num);
    // printf("num is %d",num);

    for (int i=0;i<n;i++){      
        add(&num);
        printf("num is %d\n",num);
    }

    return 0;
}

// void swap(int* x,int* y){
//     int mid;
//     mid=*x;
//     *x=*y;
//     *y=mid;
// }
// int main(){
//     int a=10;
//     int b=20;
//     printf("a is %d,b is %d\n",a,b);
//     swap(&a,&b);
//     printf("a is %d,b is %d",a,b);
//     return 0;
// }