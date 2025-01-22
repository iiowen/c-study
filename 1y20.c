#include<stdio.h>
#include<string.h>

int main(){
    // int arr1[3]={1,2,3};
    // int arr2[]={1,2,3};
    // printf("arr1 %d\n",strlen(arr1));
    // printf("arr2 %d\n",strlen(arr2));
    // printf("arr2 %d\n",sizeof(arr2));
    
    char ch1[53]={'a','b','c','\0'};
    char ch2[]="abc";
    printf("arr1 %d\n",strlen(ch1));
    printf("arr2 %d\n",strlen(ch2));

    return 0;
}