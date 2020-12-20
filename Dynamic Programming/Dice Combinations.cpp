//Phoenix_RK


/*

https://cses.fi/problemset/task/1633




Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3
Input

The only input line has an integer n.

Output

Print the number of ways modulo 109+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
4



we need to know how many ways we can get i
if dice throw shows 1, we would be interested to know in how many ways we can get i-1
if dice throw shows 2, we would be interested to know in how many ways we can get i-2
if dice throw shows 3, we would be interested to know in how many ways we can get i-3
if dice throw shows 4, we would be interested to know in how many ways we can get i-4
if dice throw shows 5, we would be interested to know in how many ways we can get i-5
if dice throw shows 6, we would be interested to know in how many ways we can get i-6

so dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6]

in short 

dp[i] = sum(dp[i-x]) where x=1 to 6 and x<i 

*/


#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main()
{

	int n;
	cin>>n;
	int a[n+1];
	memset(a,0,sizeof(a));
	a[0]=a[1]=1;

	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=6;j++)
		{
			if(j>i)
				continue;

			a[i]=((a[i]%mod)+(a[i-j]%mod))%mod;
		}

	}
	cout<<a[n]<<endl;



}

