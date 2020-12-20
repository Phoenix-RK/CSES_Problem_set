//Phoenix_RK


/*

https://cses.fi/problemset/task/1635

Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.

For example, if the coins are {2,3,5} and the desired sum is 9, there are 8 ways:
2+2+5
2+5+2
5+2+2
3+3+3
2+2+2+3
2+2+3+2
2+3+2+2
3+2+2+2
Input

The first input line has two integers n and x: the number of coins and the desired sum of money.

The second line has n distinct integers c1,c2,…,cn: the value of each coin.

Output

Print one integer: the number of ways modulo 109+7.

Constraints
1≤n≤100
1≤x≤106
1≤ci≤106
Example

Input:
3 9
2 3 5

Output:
8

*/


#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main()
{

	long long int n,k;
	cin>>k>>n;
	long long int val[k];
	for(long long int i=0;i<k;i++)
		cin>>val[i];
	long long int a[n+1]={0};
	a[0]=1;

	for(long long int i=1;i<=n;i++)
	{
		for(long long int j=0;j<k;j++)
		{
			if(val[j]>i)
				continue;

			a[i]=(a[i] + a[i-val[j]])%mod;
		}

	}
	cout<<a[n]%mod<<endl;



}

