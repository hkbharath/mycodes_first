// BEGIN CUT HERE

// END CUT HERE
#line 5 "AvoidRoads.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include<iostream>
using namespace std;

class AvoidRoads {
	public:
	int w,h;
	bool adj[101][101][2];
	void avoid(string s){
		int a,b,c,d;
		sscanf(s.c_str(),"%d%d%d%d",&a,&b,&c,&d);
		cout<<a<<b<<c<<d<<endl;
		if(a==c){
			if(b>d)adj[a][b][0]=0;
			else adj[c][d][0]=0;
		}
		else if(b==d){
			if(a>c)adj[a][b][1]=0;
			else adj[c][d][1]=0;
		}
	}
	
	long long numWays(int width, int height, vector <string> bad) {
		swap(width,height);
		memset(adj,1,sizeof(adj));
		int n=bad.size();
		for(int i=0;i<n;i++)
			avoid(bad[i]);
		long long dp[101][101];
		memset(dp,0,sizeof(dp));
		dp[0][0]=1;
		for(int i=1;i<=height;i++)if(adj[i][0][1])dp[i][0]=dp[i-1][0];
		for(int j=1;j<=width;j++)if(adj[0][j][0])dp[0][j]=dp[0][j-1];		
		for(int i=1;i<=height;i++){
			for(int j=1;j<=width;j++){
				if(adj[i][j][1])dp[i][j]+=dp[i-1][j];
				if(adj[i][j][0])dp[i][j]+=dp[i][j-1];
			}}
		if(1)for(int i=0;i<=height;i++){for(int j=0;j<width;j++)cout<<dp[i][j]<<" ";cout<<endl;}
		return dp[height][width];
	}
};
