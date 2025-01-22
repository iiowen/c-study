#include<stdio.h>
#include<string.h>

void replace(int num,int arr[],int* size){
    char str[2342];
    
    sprintf(str, "%d",num);

    *size=strlen(str);

    for(int i=0;i<*size;i++){
        arr[i] = str[i] - '0'; 
    }
}

int main(){
    int num=0;
    int arr[2342];
    int size;
a:
    scanf("%d",&num);

    replace(num,arr,&size);

    printf("arr is ");

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    goto a;
    return 0;
}

