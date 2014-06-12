#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
  int t;
  char ip[1000001];
  scanf("%d",&t);
  getchar();
  while(t--){
    char c;
    int fans=0,ans=0,lt=0;
    while((c=getchar())!='\n'){
      ans++;
      if(c=='<')
	lt++;
      else
	lt--;
      if(lt<0){
	while(getchar()!='\n');
	break;
      }
      if(lt==0)fans=ans;  
    }
    printf("%d\n",fans);
  }
}   
