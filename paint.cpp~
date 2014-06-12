#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int dp[50001][6]={0};
	int ip;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ip;
			if(i==0 && j==0)dp[i][j]=ip;
			else if(i==0)dp[i][j]=dp[i][j-1]+ip;
			else if(j==0)dp[i][j]=dp[i-1][j]+ip;
			else{
				if(dp[i-1][j] < dp[i][j-1])
					ip= ip + dp[i][j-1]-dp[i-1][j];
				dp[i][j]=dp[i-1][j]+ip;
			}
		}
	}
	for(int i=0;i<n;i++)cout<<dp[i][m-1]<<" ";
}
