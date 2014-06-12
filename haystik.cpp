#include <bits/stdc++.h>

using namespace std;

int main(){
  int l;
  while(scanf("%d",&l)==1){
    char *a = new char[l+1];
    scanf("%s",a);
    int lps[l+1];
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<l){
      if(a[i]==a[len]){
	len+=1;
	lps[i]=len;
	i++;
      }
      else{
	if(len!=0)
	  len = lps[len-1];
	else{
	  lps[i] = 0;
	  i++;
	}
      }
    }
    getchar();
    char c;
    int j=0;
    i=0;
    c = getchar();
    while(1){
      	if(c == '\n')
	  break;
	if(c==a[i]){
	  i++;
	  j++;
	  c = getchar();
	}
	if(i == l){
	  printf("%d\n",j-i);
	  i = lps[i-1];
	}
	else if(c != a[i]){
	  if(i != 0)
	    i = lps[i-1];
	  else{
	    j++;
	    c = getchar();
	  }
	}
    }
    printf("\n");
  }
}
