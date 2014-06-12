#include<bits/stdc++.h>

using namespace std;

string mul(string num,int n){
  int carry=0,ppr;
  string prd="";
  for(int i=0;i<num.length();i++){
    ppr = n * (num[i]-'0')+carry;
    carry = ppr/10;
    prd= (char)(ppr%10+'0') + prd;
  }
  while(carry){
    prd = (char)(carry%10+'0') + prd;
    carry/=10;
  }
  return prd;
}

string add(string a,string b){
  int sol=0,carry=0;
  string sum="";
  int i=a.length()-1,j=b.length()-1;
  while(i>=0 && j>=0){
    sol = a[i]+b[j]-2*'0'+carry;
    carry = sol/10;
    sum = (char)(sol%10+'0') + sum;
    i--;
    j--;
  }
  while(i>=0){
    sol = a[i]-'0'+carry;
    carry = sol/10;
    sum = (char)(sol%10 + '0') + sum;
    i--;
  }
  while(j>=0){
    sol = b[j]-'0'+carry;
    carry = sol/10;
    sum = (char)(sol%10 + '0') + sum;
    j--;
  }
  while(carry){
    sum = (char)(carry%10 + '0') + sum;
    carry /= 10;
  }
  return sum;
}

int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>k>>n;
    int sol=0;
    //cout<<add("","999")<<endl;
    string num = "1",innum="1";
    for(int i=0;i<n;i++){
      innum = mul(innum,k);
      num = add(num,innum);
    }
    //cout<<num<<endl;
    for(int i=0;i<num.length();i++)
      sol += num[i]-'0';
    cout<<sol<<endl;
  }
}

