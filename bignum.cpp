#include <bits/stdc++.h>
using namespace std;
string n1,n2;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    char ip[501];
    n1="",n2="";
    scanf("%s",ip);
    int op,l=strlen(ip),tg=1;
    for(int i=0;i<l;i++){
      if(ip[i]=='+'){
	op=1;
	tg=0;
      }
      else if(ip[i]=='-'){
	op=2;
	tg=0;
      }
      else if(ip[i]=='*'){
	op=3;
	tg=0;
      }
      else if(tg)
	n1+=ip[i];
      else
	n2+=ip[i];
    }
    if(op==1){
      string ans="";
      int c=0,s=0;
      char ss;
      int n1l=n1.size()-1,n2l=n2.size()-1;
      while(n1l>=0 && n2l>=0){
	s=c+n1[n1l]-'0'+n2[n2l]-'0';
	ss=s%10+'0';
	ans=ss+ans;
	c=s/10;
	n2l--;
	n1l--;
      }
      while(n1l>=0){
	s=c+n1[n1l]-'0';;
	ss=s%10+'0';
	ans=ss+ans;
	c=s/10;
	n1l--;
      }
      while(n2l>=0){
	s=c+n2[n2l]-'0';
	ss=s%10+'0';
	ans=ss+ans;
	c=s/10;
	n2l--;
      }
      if(c){
	ss=c+'0';
	ans=ss+ans;
      }
      int sp=ans.length()+1;
      printf("%*s\n",sp,n1.c_str());
      printf("+");
      printf("%*s\n",sp-1,n2.c_str());
      for(int i=0;i<sp;i++)
	printf("-");
      printf("\n");
      printf("%*s\n",sp,ans.c_str());
    }
  }
}
