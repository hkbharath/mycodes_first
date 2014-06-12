/*
Author
BHARATHKUMAR S H
C++
*/
#include<iostream>
using namespace std;
int ct[2500][1500];
class Milk
{
int n,m,jst,flg;
public:
void input(){
	int res[2500]={0};
	cin>>n>>m;
	for(int j=0;j<m;j++)
	{
	cin>>ct[j][0];
	for(int k=1;k<=2*ct[j][0];)
	{
	cin>>ct[j][k]>>ct[j][k+1];
	k+=2;
	}
	}
	for(int i=0;i<n;i++)
	{
	flg=0;
	for(int i=0;i<m;i++)
	{
		if(!res[ct[i][1]])
		if(ct[i][2] && ct[i][0]==1)
		{
		jst=ct[i][1];
		flg=1;
		break;
		}
	}
	if(flg)
	{
	flg=0;	
	res[jst]=1;
	for(int j=0;j<m;j++)
	for(int k=1;k<2*ct[j][0];)
	{
		if(ct[j][k]==jst && !ct[j][k+1])
		{
		ct[j][0]-=1;
		if(!ct[j][0])
		{
		cout<<"IMPOSSIBLE"<<endl;
		return;
		}
		for(int i=k;i<=2*ct[j][0];i++)
		ct[j][i]=ct[j][i+2];
		}
		k+=2;
	}
	}
	}
	for(int i=1;i<=n;i++)
	cout<<res[i]<<" ";
	cout<<endl;
}
};

int main(){
Milk x;
int tc;
cin>>tc;
for(int i=0;i<tc;i++)
{
cout<<"Case #"<<i+1<<": ";
x.input();
}
}
