#include <stdio.h>
#include <locale.h>


int main()
{
	 float dolar;
	 float dinheiro;
	 

     setlocale(LC_ALL,"Portuguese");
     
     printf("\nInforma a cotação: ");
     scanf("%f",&dolar);
     
     printf("\nInforme a sua quantia :");
     scanf("%f",&dinheiro);
     
     dolar = dinheiro/dolar;
     
     printf("\n%.2f convertido para dolar: %.2f", dinheiro,dolar);

      










































      return 0;
}
