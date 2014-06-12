// BEGIN CUT HERE

// END CUT HERE
#line 5 "WakingUpEasy.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class WakingUpEasy {
	public:
	int countAlarms(vector <int> volume, int S) {
		int n=volume.size();
		int ret=0;
		while(S>0){
			S-=volume[ret%n];
			ret++;
		}	
		return ret;
	}
};
