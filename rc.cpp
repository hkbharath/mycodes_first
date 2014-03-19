#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>

int main(){
	int n,q,k,a[100001],x;
	scanf("%d%d%d",&n,&k,&q);
	for(int i=0;i<n;i++)scanf("%d",a+i);
	int st=n-(k%n);
	while(q--){
		scanf("%d",&x);
		printf("%d\n",a[(st+x)%n]);
	}
}
