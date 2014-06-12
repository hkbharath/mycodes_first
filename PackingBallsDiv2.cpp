// BEGIN CUT HERE

// END CUT HERE
#line 5 "PackingBallsDiv2.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;

class PackingBallsDiv2 {
	public:
	int minPacks(int R, int G, int B) {
		vector<int> bags;
		bags.push_back(R);
		bags.push_back(G);
		bags.push_back(B);
		sort(bags.begin(),bags.end());
		int ans=bags[0];
		cout<<ans;
		for(int i=1;i<3;i++)bags[i]-=bags[0];
		for(int i=1;i<3;i++)
		  if(bags[i]>=3){
		    ans+=bags[i]/3;
		    bags[i]=bags[i]%3;
		  }
		int sub=min(bags[1],bags[2]);
		cout<<sub;
		ans+=sub;
		bags[1]-=sub;
		bags[2]-=sub;
		if(max(bags[1],bags[2]))return ans+1;
		return ans;
	}
};
