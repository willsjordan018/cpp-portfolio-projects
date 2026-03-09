#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
     
	 
	 
	 
     int ver;
     int nome;
     int data;
     int senha;
     int email;
     int olhar;
     int opcao;
     int pagar;
     int senha3;
     int numero;
     int email2;
     int cartao;
     int fatura;
     int senha2;
     int quantia;
     int entrega;
     int apelido;
     int gostaria;
     int gostaria2;
     int encontrar;
     int localidade;


     int main(int argc, char** argv)
     {    
     
     
      int ch;
     
      start:
	 
	  string user, pass;	

     setlocale(LC_ALL,"Portuguese");
     string usuario = "";
     string senha = "";
     bool login_sucesso = false;
     
	 printf("\n\nSeja bem-vindo(a) a Black Dragon Corporation!");
     printf("\n\nSelecione uma operação abaixo:");
     printf("\n\n1.Iniciar sessão");
     printf("\n\n2.Criar conta");
     
     printf("\n\nOpção:");
     scanf("%i",&opcao);
     
	 
	 system("cls");
     switch(opcao){
	 
	 
	  case 1:
	  	
	  	cout <<"\n\nPrecisamos de seu e-mail e sua senha.";
	 
	 
	 
	 do{
	 
	     cout << "\n\nDigite o seu e-mail:";
	     cin >> usuario;
	     
		 cout << "\n\nDigite a sua senha:";
		 ch = getch();
		 
		 while (ch!=13)
	 {
	 
	     senha.push_back(ch);
	     cout << "x";
		 ch =getch();
	 }
		 
		 
		 
		 if (usuario == "willmcpe44@gmail.com"  && senha == "Snap@@0205"){
		 
		     cout <<"\n\nLogin realizado com sucesso!";
		     login_sucesso=true;
		     system("cls");
		     
		     
		     printf("\n\nSeja bem-vindo(a)!");
	         printf("\n\nGostaria de ver o nosso catálogo?");
	         printf("\n\n1.Sim");
	         printf("\n\n2.Não");
	         printf("\n\nGostaria?:");	
	         scanf("%i",&gostaria);
	        
	         
	         system("cls");
	 switch(gostaria){
	 
	 case 1:
	 	
	 	
		 
		 
		 
		 printf("Dê uma olhada:");
	 	 printf("\n\n1.Ouro");
	 	 printf("\n\n2.Diamante");
		 printf("\n\n3.Prata");
		 printf("\n\nVer:");
		 scanf("%i",&olhar);
		 system("cls"); 	
	 	 switch(olhar){
		  
		  
		  
		  case 1:
		  	
		  	
		  	 printf("\n\nSecção dos Ouros");
			 printf("\n\n1.Pulseira em ouro amarelo com detalhes de diamante - R$ 64.000");
			 printf("\n\n2.Pulseira em ouro branco com detalhes de diamante - R$ 68.000");
			 printf("\n\n3.Pendente em ouro rosa e branco com diamantes, extragrande - R$ 130.000");
			 printf("\n\n4.Anel em ouro rosa e branco com diamantes - R$ 31.200");
			 printf("\n\n5.Anel de duas fileiras em ouro amarelo com diamantes - R$ 35.900");
			 printf("\n\n6.Anel T1 em ouro rosa com diamantes - R$ 39.000");
			 printf("\n\nEscolho:");
			 scanf("%i",&olhar);
			 
			 system("cls");
			 switch(olhar){
			 
			 
			  case 1:
			     	
			     printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
			          
			 
			       case 2:
			       	
			       	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  	
					  	
					  
					  }
					  
				case 3:
				
				printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
				 case 4:
				 
				 printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
				 case 5:
				 
				 printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
				 case 6:
				   
				   printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
				    	  	  	  	  
			 
			 return 0;
			 
			 }
			 
			 
			 
			 
			 case 2:
				  
				     printf("\n\nSecção dos Diamantes");
			         printf("\n\n1.Pulseira com corrente dupla e coração - R$ 2.700");
			         printf("\n\n2.Pendente Diamonds com diamante único - R$ 8.150");
			         printf("\n\n3.Anel Bypass em platina e ouro amarelo com diamantes - R$ 39.900");
			         printf("\n\n4.Pulseira articulada Vine em ouro rosa com diamantes - R$ 74.000");
			         printf("\n\n5.Pulseira de elos em ouro rosa com pavé de diamantes - R$ 415.000");
			         printf("\n\n6.Brincos climber Vine com diamante em ouro rosa 18k - RS 91.000");
			         printf("\n\nEscolho:");
			         scanf("%i",&olhar);
			         
			         system("cls");
			         switch(olhar){
					 
					 
					  case 1:
			     	
			     printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 2:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 3:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 4:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 5:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 6:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					 
					 
					 return 0;
					 }
			     
			     
		  
		         
		          	case 3:
		          		
		          		 printf("\n\nSecção das Pratas");
			             printf("\n\n1.Anel de Prata com Zirnônia - R$ 150,00");
			             printf("\n\n2.Pulseira de Prata com Topázio - R$ 680,00");
			             printf("\n\n3.Brinco de Prata com Topázio - R$ 450,00");
			             printf("\n\n4.Anel de Prata Coração - R$ 200,00");
			             printf("\n\n5.Gargantilha de Prata com Rubi - R$ 300,00");
			             printf("\n\n6.Brinco de Prata Espirito Santo - R$ 525,00");
			             printf("\n\nEscolho:");
			             scanf("%i",&olhar);
			             
			             system("cls");
			             switch(olhar){
						 
						 
						 
						 case 1:
			     	
			     printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					 }
					 
					 return 0;
					 
					 
					 	 
					 case 2:
					 
					 printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  
					  return 0;
					  
					  
					  case 3:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  
					  return 0;
					  
					  
					  case 4:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  
					  return 0;
					  
					  
					  case 5:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  
					  return 0;
					  
					  
					  case 6:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }	 
					 
					 return 0;	 
					 }
		          		
		          	
		  
		  }
		  }
			 
			 
	 	     
			  
			  
			  
		     
		     
		     
		      
		 
		 }
	     else
		 {
		      cout <<"\n\nSeu e-mail ou sua senha devem estar incorrectos, por favor tente novamente!";
		      goto start;
		      
		 }
	 
	 
	 }while(!login_sucesso);
	 
	 
	 break;
	 
	 
	 
	 
	 
	 case 2:
	 	
	 printf("\n\nInsira o seu nome:");
	 scanf("%s",&nome);
	 printf("\n\nInsira o seu apelido:");
	 scanf("%s",&apelido);
	 printf("\n\nInsira sua data de nascimento:");
	 scanf("%s",&data);
	 printf("\n\nInsira o seu e-mail:");
	 scanf("%s",&email);
	 printf("\n\nInsira sua senha:");
	 scanf("%s",&senha);
	 printf("\n\nInsira o seu endereço de entrega:");
	 scanf("%s",&entrega);
	 printf("\n\nInsira o endereço para a fatura:");
	 scanf("%s",&fatura);
	 
	 
	 system("cls");
	 
	 
	 
	 printf("\n\nSeja bem vindo(a)");
	 printf("\n\nGostaria de ver o nosso catálogo?");
	 printf("\n\n1.Sim");
	 printf("\n\n2.Não");	 
	 printf("\n\nGostaria?:");	
	 scanf("%i",&gostaria2);
	 
	 
	 system("cls");
	 switch(gostaria2){
	 
	 case 1:
	 	
	 	
		 
		 
		 
		 printf("Dê uma olhada:");
	 	 printf("\n\n1.Ouro");
	 	 printf("\n\n2.Diamante");
		 printf("\n\n3.Prata");
		 printf("\n\nVer:");
		 scanf("%i",&olhar);
		 system("cls"); 	
	 	 switch(olhar){
		  
		  
		  
		  case 1:
		  	
		  	
		  	 printf("\n\nSecção dos Ouros");
			 printf("\n\n1.Pulseira em ouro amarelo com detalhes de diamante - R$ 64.000");
			 printf("\n\n2.Pulseira em ouro branco com detalhes de diamante - R$ 68.000");
			 printf("\n\n3.Pendente em ouro rosa e branco com diamantes, extragrande - R$ 130.000");
			 printf("\n\n4.Anel em ouro rosa e branco com diamantes - R$ 31.200");
			 printf("\n\n5.Anel de duas fileiras em ouro amarelo com diamantes - R$ 35.900");
			 printf("\n\n6.Anel T1 em ouro rosa com diamantes - R$ 39.000");
			 printf("\n\nEscolho:");
			 scanf("%i",&olhar);
			 
			 system("cls");
			 switch(olhar){
			 
			 
			  case 1:
			     	
			     printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	 printf("\n\nInsira o código do cartão:");
				 	 scanf("%s",&cartao);
				 	 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	 
					 }
					  
				 case 2:
				 
				 printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	 printf("\n\nInsira o código do cartão:");
				 	 scanf("%s",&cartao);
				 	 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
					 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
					 
					 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 3:
					  
					 printf("\n\nDeseja pagar por:");
			         printf("\n\n1.Cartão de crédito");
			         printf("\n\n2.PayPal");
			         printf("\n\n3.Cash");
			         printf("\n\nPagar por:");
			         scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	 printf("\n\nInsira o código do cartão:");
				 	 scanf("%s",&cartao);
				 	 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
		             
					 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 4:
					  
					 printf("\n\nDeseja pagar por:");
			         printf("\n\n1.Cartão de crédito");
			         printf("\n\n2.PayPal");
			         printf("\n\n3.Cash");
			         printf("\n\nPagar por:");
			         scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	 printf("\n\nInsira o código do cartão:");
				 	 scanf("%s",&cartao);
				 	 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
			         
					 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
					  
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 5:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 6:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }	  
			          
			 
			      
			 
			 return 0;
			 
			 }
			 
			 
			 
			 
			 case 2:
				  
				     printf("\n\nSecção dos Diamantes");
			         printf("\n\n1.Pulseira com corrente dupla e coração - R$ 2.700");
			         printf("\n\n2.Pendente Diamonds com diamante único - R$ 8.150");
			         printf("\n\n3.Anel Bypass em platina e ouro amarelo com diamantes - R$ 39.900");
			         printf("\n\n4.Pulseira articulada Vine em ouro rosa com diamantes - R$ 74.000");
			         printf("\n\n5.Pulseira de elos em ouro rosa com pavé de diamantes - R$ 415.000");
			         printf("\n\n6.Brincos climber Vine com diamante em ouro rosa 18k - RS 91.000");
			         printf("\n\nEscolho:");
			         scanf("%i",&olhar);
			         
			         system("cls");
			         switch(olhar){
					 
					 
					  case 1:
			     	
			     printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 2:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 3:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 4:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 5:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 6:
					  	
					  	printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					 
					 
					 return 0;
					 }
			     
			     
		  
		         
		          	case 3:
		          		
		          		 printf("\n\nSecção das Pratas");
			             printf("\n\n1.Anel de Prata com Zirnônia - R$ 150,00");
			             printf("\n\n2.Pulseira de Prata com Topázio - R$ 680,00");
			             printf("\n\n3.Brinco de Prata com Topázio - R$ 450,00");
			             printf("\n\n4.Anel de Prata Coração - R$ 200,00");
			             printf("\n\n5.Gargantilha de Prata com Rubi - R$ 300,00");
			             printf("\n\n6.Brinco de Prata Espirito Santo - R$ 525,00");
			             printf("\n\nEscolho:");
			             scanf("%i",&olhar);
			             
			             system("cls");
			             switch(olhar){
						 
						 
						 
						 case 1:
			     	
			     printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					 }
						 
					 case 2:
					 
					 printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 3:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 4:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 5:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }
					  
					  case 6:
					  
					  printf("\n\nDeseja pagar por:");
			     printf("\n\n1.Cartão de crédito");
			     printf("\n\n2.PayPal");
			     printf("\n\n3.Cash");
			     printf("\n\nPagar por:");
			     scanf("%i",&pagar);
			     
			     system("cls");
			     switch(pagar){
				 
				 
				 case 1:
				 	
				 	printf("\n\nInsira o código do cartão:");
				 	scanf("%s",&cartao);
				 	printf("\n\nObrigado por comprar na Black Stone!");
				 	printf("\n\nSeu artigo será entregue");
				 	printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	
				 	 
				 	 return 0;
				 	
				 case 2:
				 	   
				 	 printf("\n\nInsira o email da sua conta:");
				 	 scanf("%s",&email2);
				 	
				 	 printf("\n\nInsira a sua senha:");
				 	 scanf("%s",&senha3);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
				 case 3:
				 	
				 	 printf("\n\nInsira a quantia a ser paga:");
				 	 scanf("%s",&quantia);
					 printf("\n\nObrigado por comprar na Black Stone!");
				 	 printf("\n\nSeu artigo será entregue.");
				 	 printf("\n\nTem o prazo de 5 dias para devolução do artigo e garantia de 365 dias.");
				 	 
				 	 
				 	 return 0;
				 	 
					  
					  
					  }	 
						 
					 }
		          		
		          	
		  
		  }
		  
		  
		  
	 	
	 
	
	 case 2:
	 	
	 	return 0;
	 
	 
	 
	 
	 
	 }
	 
	 
	
	
	
	 case 3:
	 	
	 	printf("\n\nGostaria de encontrar mineirios na sua região?");
	 	printf("\n\n1.Sim");
	 	printf("\n\n2.Não");
	 	printf("\n\nEscolho:");
	 	scanf("%i",&encontrar);
	 	
	 	system("cls");
	 	switch(encontrar){
		 
		 
		 
		 
		 case 1:
		 	
		 	printf("\n\nDesculpe, você precisa conectar o seu celular ao aparelho primeiro para poder utilizar está função.");
		 	
		 	
		 	
		 	
		 	case 2:
		 		
		 		return 0;
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 }
	 	
	
	
	 }
     return 0;

}



