#include<stdio.h>
int main ()
{
  int i,n,t1=0,t2=1,nextterm;
  printf("Enter number for term:");
  scanf("%d",&n);

  printf("Fabinocis series :");

  for ( i = 1; i <=n; ++i)
  {
    printf(" %d, ",t1);
    nextterm = t1+t2;
    t1=t2;
    t2=nextterm;
  }
  return 0;
}