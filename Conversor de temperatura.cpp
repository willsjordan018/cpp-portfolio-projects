#include <locale.h>
#include <stdio.h>


int main(){


     setlocale(LC_ALL,"Portuguese");

     int f;
	 int c;
	 int conversao;
	 
	 printf("\n Bem-vindo ao H.O.T");
     printf("\n Selecione uma operação abaixo");
     printf("\n 1.Celsius -> Fahrenheit");
     printf("\n 2.Fahrenheit -> Celsius");
     printf("\n Operação:");
     scanf("%i",&conversao);
	 
	 
	 switch(conversao){
	 
	 
	
     case 1:
     
	 printf("Insira a quantidade de graus Celsius:");
	 scanf("%d",&c);
	 
	 f =(c*1.8+32);
	 printf("\Celsius -> Fahrenheit:%d", f);
	 
	 break;
	 
	 
	 
	 
	 case 2:
	 	
	 printf("\nInsira a quantidade de graus Fahrenheit:");
	 scanf("%i",&f);
	 
	 c =(f-32)/1.8;
	 printf("\Fahrenheit Celsius:%i", c);
	 
	 }
	 
	 
	 
	 
	 return 0;





       }
