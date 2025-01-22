#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int a=0;
    scanf("%d",&a);

    int left=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int right=sz-1;

    while (left<=right)
    {
        int mid=(left+right)/2;

        if(a<arr[mid])
            right=mid-1;
        else if (a>arr[mid])
            left=mid+1;
        else{
            printf("ok\n");
            break;
        }
    }
    if(left>right)
        printf("not found\n");

}