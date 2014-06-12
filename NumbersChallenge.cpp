// BEGIN CUT HERE

// END CUT HERE
#line 5 "NumbersChallenge.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

int dp[2000001];
class NumbersChallenge {
	public:
	int MinNumber(vector <int> S) {
	  dp[0]=1;
	  for(int i=0;i<S.size();i++){

	   // cout<<S[i]<<endl;
	    for(int j=200000;j>=S[i];j--)
	      dp[j] |= dp[j-S[i]];
	   // for(int k=0;k<10;k++)
	   //   cout<<dp[k]<<endl;
	   // cout<<endl;
	  }
	 // for(int i=0;i<100;i++)
	   // cout<<dp[i]<<endl;
	  for(int i=1;i<200000;i++)
	    if(dp[i]==0)
	      return i;
	  return 0;
	}
};
