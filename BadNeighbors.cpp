// BEGIN CUT HERE

// END CUT HERE
#line 5 "BadNeighbors.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class BadNeighbors {
	public:
	int maxDonations(vector <int> d) {
		int n=d.size();
		int dp[n+1];
		dp[1]=dp[0]=d[0];
		for(int i=2;i<n-1;i++)
			dp[i]=max(dp[i-1],dp[i-2]+d[i]);
		dp[n-1]=dp[n-2];
		
		int dp1[n+1];	
		dp1[0]=0;dp1[1]=d[1];
		
		for(int i=2;i<n;i++)
			dp1[i]=max(dp1[i-1],dp1[i-2]+d[i]);
		
		return max(dp[n-1],dp1[n-1]);
	}
};
