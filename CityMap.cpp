// BEGIN CUT HERE

// END CUT HERE
#line 5 "CityMap.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

class CityMap {
	public:
	string getLegend(vector <string> cityMap, vector <int> POIs) {
		int h=cityMap.size();
		int w=cityMap[0].length();
		int ar[26]={0};
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)
			if(cityMap[i][j] != '.' )ar[cityMap[i][j]-'A']++;
		int n=POIs.size();
		string sol="";
		for(int i=0;i<n;i++)
			for(int j=0;j<26;j++)if(POIs[i]==ar[j])sol+=('A'+j);
		return sol;				
	}
};
