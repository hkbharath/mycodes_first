#include<stdio.h>

int main(void){
  FILE *fin;
  FILE *fout;
  int l;
  char d;
  char pk[100];
  char cd[100];
  fin = fopen("in", "r");
  fscanf(fin, "%d %c %s %[^\n]", &l, &d, pk, cd);
  fclose(fin);
 // fout = fopen("b.out", "w+");
  printf( "%d%c %s %s", l, d, pk, cd);
}
