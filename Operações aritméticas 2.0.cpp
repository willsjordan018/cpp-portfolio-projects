#include <stdio.h>
#include <locale.h>

main(void)
{
     int A;
     int B;
     
     setlocale(LC_ALL,"Portuguese");
     
     printf("Insira o primeiro número:");
     scanf("%i",&A);
     
     printf("Insira o segundo número:");
     scanf("%i",&B);
     
	 printf("Resultado da soma: %i\n",A+B);
     
	 printf("Resultado da subtração: %i\n",A-B);
     
	 printf("Resultado da multiplicação: %i\n",A*B);
     
	 printf("Resultado da divisão: %i\n",A/B);
	 
	 
	 
	 
	 
	 
	 
	 
	 return 0;
	 
	 
	 



}
