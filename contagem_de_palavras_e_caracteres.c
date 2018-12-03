#include <stdio.h>
int main()
{
  int caractere=0,palavra=1;
  char letra='a';
  printf("\n\tInsira uma sentenca: ");
  while(letra!='\r')
  {
    letra=getche();
    if(letra==' ')
      palavra++;
    else
      caractere++;
  }
  printf("\n Numero de palavras = %d \n Numero de caracteres = %d\n",palavra,caractere-1);
  return 0;
}
