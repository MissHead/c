#include <stdio.h>
int main()
{
  double i=1,n,f=1;
  printf("\nDigite um numero inteiro: ");
  scanf("%lf",&n);
  while(i<=n)
  {
  	f*=i;
  	i++;
  }
  printf("\n\tFatorial = %0.0lf\n",f);
  return 0;
}
