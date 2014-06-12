// BEGIN CUT HERE

// END CUT HERE
#line 5 "TaroString.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

class TaroString {
	public:
	string getAnswer(string s) {
		bool res=1;
		int n=s.length();
		int ord[3]={0};
		int alpha[26]={0};
		for(int i=0;i<n;i++){
			alpha[s[i]-'A']++;
			if(s[i]=='C')ord[0]=i;
			if(s[i]=='A')ord[1]=i;
			if(s[i]=='T')ord[2]=i;
		}
		res = res&(alpha[2]==1);
		res = res&(alpha[0]==1);
		res = res&(alpha[19]==1);
		res = res& (ord[0]<ord[1] && ord[1]<ord[2]);
		if(res)return "Possible";
		return "Impossible";
	}
};
