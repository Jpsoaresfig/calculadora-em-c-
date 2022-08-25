#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int num1, num2, soma, subtracao, multi, div, operacao;

   printf("digite um valor:");
   scanf("%d", &num1);
   printf("digite outro valor:");
   scanf("%d", &num2);
   printf("digite um operador 1=+, 2=-, 3=*, 4=/:");
   scanf("%d", &operacao);

    soma            = num1 + num2;
    subtracao       = num1 - num2;
    multi           = num1 * num2;
    div             = num1 / num2;

   switch(operacao)
   {
  case 1 :
    printf("o valor somado foi de %d", soma);
  break;
  case 2 :
    printf("o valor subtraido foi de %d", subtracao);
  break;
  case 3 :
    printf("o valor multiplicado foi de %d", multi);
  break;
  case 4 :
    printf("o valor dividido foi de %d", div);
  break;
  default :
    printf("valor invalido");

}


    return 0;
}
