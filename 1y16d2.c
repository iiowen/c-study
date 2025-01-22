#include<stdio.h>
void look(int arr[]){
    printf("arr[]%d\n",arr[6]);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    look(arr);
    
    return 0;
}
/* void swap(int **xp,int **yp){
    int *mid;
    mid=&(**xp);
    *xp=&(**yp);
    *yp=mid;

}
int main(){
    int a,b;
    
    int* ap=&a;
    int* bp=&b;

    int *app=&ap;
    int *bpp=&bp;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d,%d\n",a,b);
    printf("%d,%d\n",*ap,*bp);
    printf("%d,%d\n",*app,*bpp);

    swap(&ap,&bp);//交换

    printf("%d,%d\n",a,b);
    printf("%d,%d\n",*ap,*bp);
    printf("%d,%d\n",*app,*bpp);

    return 0;
} */
