#include <bits/stdc++.h>

using namespace std;
string res;

string divide(string res){
  int buf = 0;
  string ans = ""; 
  for(int i=0;i<res.length();i++){
    int var = res[i]-'0';
    buf = buf*10+var;
    char ad = buf/2 +'0';
    ans += ad;
    buf = buf%2;
  }
  while(ans[0] =='0')
    ans.erase(ans.begin());
  return ans;
}   

void subc(char *n,char *m){
  res = "";
  int nl = strlen(n)-1;
  int ml = strlen(m)-1;
  int borrow = 1;
  while(nl>=0 && ml>=0){
    char ad;
    int var = n[nl] - m[ml];
    if(var >= 0 ){
      ad = var +'0';
      res = ad + res;
    }
    else{
      int it = 1;
      while(n[nl-it] == '0'){
	n[nl-it] = '9';
	it++;
      }
      n[nl-it]-=1;
      ad = n[nl]+10 - m[ml] +'0';
      res = ad + res;
    }
    nl--;ml--;
  }
  while(nl>=0){
    char ad = n[nl];
    res = ad + res;
    nl--;
  }
  res = divide(res);
}

void addc(char* n, char* m){
  res="";
  int  nl = strlen(n)-1;
  int lm = strlen(m)-1;
  int carry = 0;
  while(nl>=0 && lm>=0){
    int var = n[nl]+m[lm] - 2*'0'+carry;
    char ad = var%10 +'0';
   // cout<<ad<<endl;
    carry = var/10;
    res = ad + res;
    lm--,nl--;
  }
  while(nl>=0){
    int var = n[nl]+carry -'0';
    char ad = var%10+'0';
    carry = var/10;
    res = ad + res;
    nl--;
  }
  while(carry){
    char ad = carry%10 +'0';
    res = ad + res;
    carry/=10;
  }
  res = divide(res);
}

int main(){
  int t=10;
  while(t--){
    char tot[101],diff[101];
    scanf("%s%s",tot,diff);
    addc(tot,diff);
    printf("%s\n",res.c_str());
    subc(tot,diff);
    printf("%s\n",res.c_str());
  }
}
