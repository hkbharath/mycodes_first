// BEGIN CUT HERE

// END CUT HERE
#line 5 "ColorfulCoinsEasy.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class ColorfulCoinsEasy {
	public:
	string isPossible(vector <int> values) {
		long long x=0;
		int n=values.size();
		for(int i=0;i<n;i++)
			x+=(i+1)*values[i];
		int pr,ppr;
		for(int i=n-1;i>=0;i--){
			if(i==n-1)ppr=pr=x/values[i];
			pr=x/values[i];
			if(i!=n-1 && pr==ppr) return "Impossible";
			x=x%values[i];
			ppr=pr;
		}
		return "Possible";
	}
};
