#include <stdio.h>
#include <locale.h>

int opcao;

main(void){

      
	  int opcao;
	  int pronto;
	  int nao_pronto;
	  int escolha;
	  int acertou;
	  int errou;
	  int comecar;
	  
	  
	  
	  setlocale(LC_ALL,"Portuguese");
      
      
    
     printf("Olá");
     printf("\nPronto para começar o jogo?");
	 printf("\n1.Sim");
	 printf("\n2.Não");
	 printf("\nPronto?:");
	 scanf("i%",&pronto);
	 
	 
	 if(pronto=1){
	 
	   printf("\nResponda as questões correctamente para progredir no jogo.");
	   printf("\nBoa Sorte!");
	   
	   
	 }else{
	 
	    printf("Que pena, volte quando você estiver preparado.");
	 
	 
	 }
     
     
     
     










}
