#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	char c;
	int a[26]={0},b[26]={0};
	while((c=getchar())!='\n')a[c-'a']++;
	while((c=getchar())>='a' && c<='z')b[c-'a']++;
	int sol=0;
	for(int i=0;i<26;i++)sol+=abs(a[i]-b[i]);
	printf("%d\n",sol);
}
