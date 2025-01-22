#include <stdio.h>

int main(){
    int a = 1;
    for(int i=1;i<5;i++){
        a = a * i;
        printf("%d\n",i);
    }
    printf("%d\n",a);
    return 0;
}



