//Phoenix_RK

/*


https://cses.fi/problemset/task/1634

Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.

For example, if the coins are {1,5,7} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.

Input

The first input line has two integers n and x: the number of coins and the desired sum of money.

The second line has n distinct integers c1,c2,…,cn: the value of each coin.

Output

Print one integer: the minimum number of coins. If it is not possible to produce the desired sum, print −1.

Constraints
1≤n≤100
1≤x≤106
1≤ci≤106
Example

Input:
3 11
1 5 7

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

	
        int n,W;
	cin>>n>>W;
	int val[n];
	for(int i=0;i<n;i++)
		cin>>val[i];

        int a[n+1][W+1];
 	    
    	for(int i=0;i<=n;i++)
    	{
    	    for(int j=0;j<=W;j++)
    	    {
    	        if(i==0|| j==0)
	        {
	                a[i][j]=0;
	                continue;
	        }
    	        if(val[i-1]>j)
    	            a[i][j]=a[i-1][j];
    	            
    	        else
    	            a[i][j]=min(1+a[i][j-val[i-1]],a[i-1][j]);
    	    }
    	}
   	cout<<a[n][W]<<endl;

  	return 0;  
}


