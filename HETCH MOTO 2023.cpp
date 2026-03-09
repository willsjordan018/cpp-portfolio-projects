#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int a;
char usuario[15];
char email[15];
int senha;
int e;
int lirio;
int aleixo;
int i;
int o;
int opcao;
int opcao2;
int f;
int r;
int z;


int main (){


setlocale(LC_ALL,"Portuguese");

printf("\n\n\t\t\t\t__________________BEM-VINDO AO HEETCH MOTO__________________");
printf("\n\n1- Iniciar sessão");
printf("\n\n2- Criar uma conta\n");
printf("\n3- Fazer cadastro como motorista\n");
scanf("%i" ,&a);
switch(a){
	case 1:
		printf("\n\nDigite o seu e-mail ou número de telemóvel:");
		scanf("%s" ,&email);
		printf("\n\nDigite a sua senha:");
		scanf("%d",&senha);
		switch(senha){
	case 1234:
		
			 	 int selecao;
			 	
				 printf("\t\t **********************BEM-VINDO A SUA CONTA DO HEATCH**********************");
			 	 printf("O que deseja fazer?");
				 printf("\n1 - Chamar uma moto");
  
    printf("\nopcao:  ");
    scanf("%d", &opcao);
	system("cls");
	
	switch(opcao)
		
		
					printf("Quer chamar uma moto?");	
					printf("\n\n1- Sim");
					printf("\n\n2- Não\n ");
					scanf("%s",&e);
					printf("\n\nNos diga a sua localização:");
					scanf("%s" ,&lirio);
					printf("\n\nQualç é o seu destino?:");
						scanf("%s" ,&aleixo);
						
						
						printf("\n\n\ Como Vai Pagar :");
						printf("\n\n\n1- dinheiro em mao ");
							printf("\n\n\2- por cartao Multicaixa\n\n");	
							scanf("%s" ,&r);
							
							
						printf("\n\n\nescolha uma das opcoes :");
						printf("\n\n1- MOTO BMW  13500kz");
						printf("\n\n2 - MOTO BMX 10000kz");
						printf("\n\n3 - MOTO GP 14000kz\n\n");
						scanf("%s" ,&i);
						
						printf("\n\n\nVER MOTO MAIS PROXIMA \n\n ");
				
					
						
						
						printf("\n\n\nA MOTO ESTARA NA SUA LOCALIDADE DENTRO DE 3 MINUTOS BOA VIAGEM\n\n\n");
						
						
				
			break;
			default:
				printf("\n\n Senha Errada");
				
					
			}
		break;
		case 2:
					printf("\t\t************* Formulario de Cadastro*************");
						printf("\n\n Nome Completo :");
						scanf("%s",&senha);
							printf("\n\n Data de Nascimento :");
							scanf("%s",&senha);
							printf("\n\n Telefone ou E-mail :");
							scanf("%s",&senha);
								printf("\n\n Morada:");
								scanf("%s",&senha);
									printf("\n\n Criar Senha :");
									scanf("%s",&senha);
										printf("\n\n Confirmar senha :");
										scanf("%s",&senha);
											printf("\n\n CADASTRO COMPLETO :\n\n");
						 	int selecao;
						 			printf("\t\t **********************BEM VINDO A SUA CONTA DO HEATCH**********************");
			 	printf("\n1 - pedir moto");
  
    printf("\nopcao:  ");
    scanf("%d", &opcao);
	system("cls");
	
	switch(opcao)
		
	
					printf("\n\nDESEJA PEDIR MOTO");
					printf("\n\n1- SIM ");
					printf("\n\n2- NAO\n ");
					scanf("%s" ,&e);
					printf("\n\nADICIONA A SUA LOCALIZACAO ACTUAL :");
					scanf("%s" ,&lirio);
					printf("\n\nADICIONA O SEU DESTINO :");
						scanf("%s" ,&aleixo);
							printf("\n\n\ Como Vai Pagar :");
						printf("\n\n\n1- dinheiro em mao ");
							printf("\n\n\2- por cartao Multicaixa\n\n");	
							scanf("%s" ,&z);
							
							
						
						printf("\n\n\nescolha uma das opcoes :");
						printf("\n\n1- MOTO BMW  13500kz");
						printf("\n\n2 - MOTO BMX 10000kz");
						printf("\n\n3 - MOTO GP 14000kz\n\n");
						
						printf("\n\n\nver moto mais proxima\n\n ");
				
					
						
						
						printf("\n\n\nA moto estara na sua localizacao dentro de 3 minutos BOA VIAGEM\n\n\n");
						
											
										break;
										default:
												printf("\n\n Opcao Invalida, Tenta Novamente!");
													case 3:
					printf("\t\t************* Formulario de Cadastro*************");
						printf("\n\n Nome Completo :");
						scanf("%s",&senha);
							printf("\n\n Data de Nascimento :");
							scanf("%s",&senha);
							printf("\n\n Telefone ou E-mail :");
							scanf("%s",&senha);
								printf("\n\n Morada");
								scanf("%s",&senha);
									printf("\n\n adicione a sua matricula :");
								scanf("%s",&senha);
									printf("\n\n adicione a marca da moto :");
								scanf("%s",&senha);
									printf("\n\n adicione o numero da carta de conducao:");
								scanf("%s",&senha);
									printf("\n\n Criar Senha :");
									scanf("%s",&senha);
										printf("\n\n Confirmar senha :");
										scanf("%s",&senha);
										
							
											printf("\n\n CADASTRO COMPLETO \n\n");
												 
							 
							 
			 	
			 	printf("\t\t **********************BEM VINDO A SUA CONTA DO HEATCH**********************");
			 	printf("\n1 -  comecar corrida");
  
    printf("\nopcao:  ");
    scanf("%d", &opcao);
	system("cls");
	
	switch(opcao)
							 
							 
			 
							 										
											printf("\n\ncomecar corrida");
												printf("\n\n\nescolha uma das opcoes :");
						printf("\n\n1- proposta :Zango ao Benfica 12000kz ");
						printf("\n\n2 - proposta :Porto de Luanda ao Condominio Jardim De Rosas 37500kz");
						printf("\n\n3 -proposta : Sequele a Mutamba  24000kz");
						printf("\n\n4- Negar proposta\n\n");
						scanf("%i" ,&f);
						
				printf("\n\nestaras na localidade do cliente dentro de 6 minutos\n\n ");		
  
					
}
system("PAUSE");
}

