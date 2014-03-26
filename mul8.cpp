#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mul8[125][10];
int ip[10];
char str[111];

void create(){
  int i,prod=0,c;
  for(i=1;i<=125;i++){
    prod = 8*i;
    while(prod){
      mul8[i][prod%10]++;
      prod/=10;
    }
  }
}

void process(int n){
	if(n==0)printf("YES\n");
	else if(n==1){
		if(str[0]=='8')
			printf("YES\n");
		else printf("NO\n");	
	}
	else if(n==2){
		for(int i=2;i<13;i++){
			int ok=1;
			for(int j=1;j<10;j++)
				ok&=(ip[j]==mul8[i][j]);
			if(ok){printf("YES\n");return;}
		}
		printf("NO\n");
	}
	else{
		for(int i=13;i<125;i++){
			int ok=1;
			for(int j=1;j<10;j++)
				ok&=(ip[j]==mul8[i][j]);
			if(ok){printf("YES\n");return;}
		}
		printf("NO\n");
	}
}

int main() {
  create();
  int t,n,i,j,flag=1;  
  scanf("%d",&t);
  while(t--){
  	flag=1;
  	scanf("%s",str);
  	int an=n=strlen(str);
  	memset(ip,0,sizeof(ip));
  	for(int i=0;i<n;i++){
  		if(str[i]=='0')an--;
  		ip[str[i]-'0']++;
  	}
  	if(n-an>=3){printf("YES\n");continue;}
  	if(an<=3){process(an);continue;}
  	
  	for(int i=13;i<=125;i++){
  		int ok=0;
  		for(int j=1;j<10;j++)
  			if(mul8[i][j] && ip[j]>=mul8[i][j])ok++;
  		if(ok>=3){flag=0;printf("YES\n");break;}
  	}
  	if(flag)printf("NO\n");
  }   
  return 0;
}
