#include<stdio.h>

// void print(int x){
//     if(x>9){
//         print(x/10);
//     }
//     printf("%d ",x%10);
// }

// int main(){
//     int a=0;
//     scanf("%d",&a);

//     print(a);

//     return 0;
// }

// int my_strlen(char* arr){
//     int count=0;
//     while(*arr!='\0'){
//         arr++;
//         count++;
//     }
//     return count;
// }

// int main(){
//     // int count=0;
//     char arr[]="gdfg";
//     scanf("%s",&arr);

//     int len=my_strlen(arr);
 
//     printf("%d",len);

//     return 0;

// }

// int my_strlen(char* arr,int* countp){
//     while(*arr!='\0'){
//         arr++;
//         *countp++;
//     }
//     return *countp;
// }

// int main(){
//     int count=0;
//     char arr[]="gdfg";
//     scanf("%s",&arr);

//     my_strlen(arr,&count);
 
//     printf("%d",count);

//     return 0;

// }

// int my_strlen(char* str){
//     if(*str!='\0')
//         return 1+my_strlen(str+1);
//     else
//         return 0;
// }
// int main(){
//     char str[]="abc";
// a:
//     scanf("%s",&str);

//     int len=my_strlen(str);

//     printf("len=%d\n",len);
//     goto a;

//     return 0;

// }

// int jiechen(int x){
//     if(x>1){
//         return x*jiechen(x-1);
//     }
//     else
//         return 1;   6

// }

// int main(){
//     int a;
//     scanf("%d",&a);

//     int ret=jiechen(a);

//     printf("jiechen is %d\n",ret);

//     return 0;
// }
// int count=0;









//fib1：



// int fib(int n){
//     int a=1;
//     int b=1;
//     int c=1;
//     while(n>2)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         n--;
//         count++;
//     }
    
//     return c;
// }

// int main(){
//     int n;
// a:
//     scanf("%d",&n);

//     long long int ret=fib(n);

//     printf("the a part ot fib is%d\n",ret);
//     printf("the a part ot count is%d\n",count);
//     count=0;
//     goto a;
//     return 0;
// }









//fib2








#include<stdio.h>
#define MAX 100

int fib(int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 1;
	else{
		int arr[MAX];
		arr[1]=1;
		arr[2]=1;
		for(int i=3;i<=n;i++){
			arr[i]=arr[i-1]+arr[i-2];
		}
		return arr[n];

	}
}

int main(){
	int n;
	scanf("%d",&n);

	int ret=fib(n);

	printf("n of fib is %d\n",ret);

	return 0;
}









// #include<stdio.h>
// #include<math.h>
// int Hanoi_count(int n)
// {
// 	return pow(2, n) - 1;
// }
// void move(int x, int y)
// {
// 	printf("%c->%c\n", x, y);
// }
// void Hanoi(int n, char a, char b, char c)
// {
// 	if (n == 1)
// 	{
// 		move(a, c);
// 	}
// 	else
// 	{
// 		Hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
// 		move(a, c);//将A座上最后一个盘子移向C座
// 		Hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
// 	}
// }
// //move中的实参与hanoi函数中的形参相对应，而hanoi函数中形参a，b，c所对应的值也是在有规律的变化
// int main()
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	int ret = Hanoi_count(n);
// 	printf("%d层汉诺塔完成移动一共要%d步\n", n, ret);
// 	Hanoi(n, 'A', 'B', 'C');
// 	return 0;
// }
