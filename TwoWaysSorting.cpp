// BEGIN CUT HERE

// END CUT HERE
#line 5 "TwoWaysSorting.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;

class TwoWaysSorting {
	public:
	int cmp(string a,string b){
	  return a.size()<b.size();
	}
	string sortingMethod(vector <string> stringList) {
	  vector <string> tmp=stringList;
	  sort(tmp.begin(),tmp.end());
	  bool ok = 1,l=0,s=0;
	  for(int i=0;i<stringList.size();i++)
	    ok &= (tmp[i] == stringList[i]);
	  if(ok)
	    l = 1;
	  for(int i=0;i<tmp.size();i++)
	    cout<<tmp[i]<<endl;
	  ok = 1;
	  sort(tmp.begin(),tmp.end(),cmp); 
	  for(int i=0;i<stringList.size();i++)
	    ok &= (tmp[i]==stringList[i]),cout<<tmp[i]<<endl;
	  if(ok)
	    s = 1;
	  if(s && l)
	    return "both";
	  else if(s)
	    return "lengths";
	  else if(l)
	    return "lexicographically";
	  else
	    return "none";
		
	}
};
