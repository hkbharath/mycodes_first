#include <bits/stdc++.h>

using namespace std;

string mul(string m, int n){
  char a[4];
  sprintf(a,"%d%c",n,'\0');
  int l1 = strlen(a);
  //printf("len : %d\n",l1);
  int l2 = m.length();
  int num[160]={0};
//  for(int i=0;i<l2;i++)
//    num[l2-i-1] = m[i] - '0';
  int carry =0;
  int x,y;
  for(int i=0;i<l1;i++){
    carry = 0;
    for(int j=0;j<l2;j++){
      x = m[l2-j-1]-'0'; y = a[l1-i-1]-'0';
      int var = x*y+carry + num[j+i];
      num[j+i] = var%10;
      carry = var/10;
    }
    x = l2;
    while(carry){
      int var = carry + num[x+i];
      num[x+i] = var%10;
      carry = var/10;
    }
  }
  m = "";
  char c;
  x=0;
  for(int i=159;i>=0;i--){
    x = x || num[i];
    if(x){
    c = num[i]+'0';
    m += c;
    }
  }
  return m;
}


int main(){
  int t;
  //printf("%s\n",mul("5678",13).c_str());
  scanf("%d",&t);
  vector<string> fact;
  fact.push_back("1");
  for(int i=1;i<=100;i++)
    fact.push_back(mul(fact[i-1],i));
  while(t--){
    int n;
    scanf("%d",&n);
    printf("%s\n",fact[n].c_str());
  }
}
