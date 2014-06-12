// BEGIN CUT HERE

// END CUT HERE
#line 5 "TaroCards.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

//no idea go through the tutorils
long long ncr[51][51];

class TaroCards {
	public:
	void init(){
		ncr[0][0]=1;
		for(int i=1;i<=50;i++)
			ncr[i][i]=ncr[i][0]=1;
		for(int i=2;i<=50;i++)for(int j=1;j<i;j++)
			ncr[i][j]=ncr[i-1][j]+ncr[i-1][j-1];
	}
	long long getNumber(vector <int> first, vector <int> second, int K) {
		init();
		long long sol=0;
		for(int i=0;i<first.size();i++)		
	}
};
