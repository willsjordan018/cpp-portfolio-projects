#include <stdio.h>
#include <locale.h>

int operacao;
int iban;
int nome;
int pagamento;
int quantia;
int entidade;
int quantidade;
int destinatario;
int referencia;
int valor;


main(void){

     setlocale(LC_ALL,"Portuguese");
	  
	 printf("\n Bem-vindo ao MC Express");
     printf("\n Selecione uma operação abaixo");
     printf("\n 1.Pagamento");
     printf("\n 2.Transferência");
     printf("\n 3.Levantamento");
     printf("\n 4.Consultas");
     printf("\n Operação:");
     scanf("%i",&operacao);
      
     switch(operacao){
	 case 1:
	     
	 printf("\n 1.Pagamento ao estado");
	 printf("\n 2.Carregamentos");
	 printf("\n 3.Pagamento por referência");
	 printf("\n Operação:");
	 scanf("%i",&pagamento);
		 
	 switch(pagamento){
	 case 1:
		 	
	 printf("Insira a entidade:");
	 scanf("%i",&entidade);
     
	 
	 printf("\nInsira a referência:");
	 scanf("%i",&referencia);
	 
	 
	 printf("\nInsira o valor:");
	 scanf("%i",&valor);
     
	 
	 printf("\nPagamento concluido.");
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 }		 
		 
		 
		 
	    
	  
	  
	  
	  
	  }
	  
	  
	  
}
