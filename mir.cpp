#include<cstdio>

int main(){

	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		char a[10001];
		scanf("%d%d",&n,&m);
		while(n--){
			scanf("%s",a);
			for(int j=m-1;j>=0;j--)printf("%c",a[j]);
			printf("\n");
		}
	}
}
