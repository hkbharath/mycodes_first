// BEGIN CUT HERE

// END CUT HERE
#line 5 "MagicalStringDiv2.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class MagicalStringDiv2 {
	public:
	int minimalMoves(string s) {
	  int n=s.length();
	  int ans=0;
	  for(int i=0;i<n/2;i++)if(s[i]=='<')ans++;
	  for(int i=n/2;i<n;i++)if(s[i]=='>')ans++;
	  return ans;
		
	}
};
