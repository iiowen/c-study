//ц╟ещеепР
#include<stdio.h>

void bubble(int arr[],int sz){
    int tmp;
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-i-1;j++){
            if(arr[j]<arr[j+1])
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
        }
    }
}

void print(int arr[],int sz){
    for(int i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int sz=sizeof(arr)/sizeof(arr[0]);

    bubble(arr,sz);

    print(arr,sz);
    
    return 0;
}