// #include <stdio.h>

// int climbStairs(int n) {
//     // int con=(int)1e9 + 7;
// 	if (n == 1) {
// 		return 1;
// 	}
// 	else if (n == 2) {
// 		return 2;
// 	}
// 	else {
// 		// return climbStairs(n - 1)%con + climbStairs(n - 2)%con;
//         return climbStairs(n - 1) + climbStairs(n - 2);

// 	}
// }

// int main() {
// 	int n;
// 	printf("请输入楼梯的阶数：");
// 	scanf("%d", &n);

// 	int ways = climbStairs(n);
// 	printf("%d 阶楼梯一共有 %d 种跳法。\n", n, ways);

// 	return 0;
// }
#include<stdio.h>
#define MAX 100

int ClimbStairs(int number)
{
	// int con = (int)1e9 + 7;
	if (number == 1)
		return 1;
	else if (number == 2)
		return 2;
	else
	{
		int dp[MAX];
		dp[1] = 1;
		dp[2] = 2;
		int i = 0;
		for (i = 3; i <= number; i++)
		{
			// dp[i] = dp[i - 1] % con + dp[i - 2] % con;
            dp[i] = dp[i - 1]  + dp[i - 2] ;
		}
		return dp[number];
	}
}

int main() {
	int n;
	printf("请输入楼梯的阶数：");
	scanf("%d", &n);

	int ways = ClimbStairs(n);
	printf("%d 阶楼梯一共有 %d 种跳法。\n", n, ways);

	return 0;
}
