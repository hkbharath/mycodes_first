#include<bits/stdc++.h>
using namespace std;

char inf[401],st[401],op[401];
int top,put;

int pri(char c){
  switch(c){
    case '^':return 1;
    case '/':return 2;
    case '*':return 2;
    case '+':return 3;
    case '-':return 3;
    default :return 0;
  }
}

void push(char c){
  if(c>='a' && c<='z'){
    op[put++]=c;
    return;
  }
  while(pri(st[top]>pri(c)))
    op[put++]=st[top--];
  st[++top]=c;
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    put=0;
    top=-1;
    memset(st,0,sizeof(st));
    memset(op,0,sizeof(op));
    scanf("%s",inf);
    int l=strlen(inf);
    for(int i=0;i<l;i++){
      switch(inf[i]){
	case '(':st[++top]='(';break;
	case ')':while(st[top]!='('){
		   op[put++]=st[top];
		   top--;
		 }
		 top--;
		 break;
	default : push(inf[i]);
      }
    }
    while(top>=0){
      op[put++]=st[top--];
    }
    op[put]='\0';
    printf("%s\n",op);
  }
}


