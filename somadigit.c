#include<stdio.h>

int main()
{
    int num, soma = 0;
    do
    {
      printf("Digite um numero: ");
       scanf("%d",&num);
       if (num>=0)
       {
        soma = soma + num;
       }
       
    } while (num>=0);
    printf("A soma dos valores e %d",soma);
    
}
