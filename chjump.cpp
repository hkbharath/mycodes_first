#include<stdio.h>
int main(){
  long long a;
  scanf("%lld",&a);
  if(a==0 || a%6==0 || (a+3)%6==0 || (a+5)%6==0)
    printf("yes\n");
  else
    printf("no\n");
}
