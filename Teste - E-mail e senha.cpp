#include <iostream>
#include <string>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

     int numero;
     int nome;
     int senha;
     int email;
     int localidade;


     int main(int argc, char** argv)
     {    

     setlocale(LC_ALL,"Portuguese");
     string usuario = "";
     string senha = "";
     bool login_sucesso = false;
     
	 printf("\nOlá!");
     printf("\nSeja bem-vindo(a) a Black Stone");
     printf("\nSelecione uma operação abaixo.");
     printf("\n1.Iniciar Sessão");
     printf("\n2.Criar conta");
     printf("\n3.Iniciar Sessão como forneedor");
     printf("\n4.Criar conta como fornecedor");
     printf("\n5.Localizar minerios na sua região");
     printf("\nOpção:");
     scanf("%i",&opcao);
     
	 
	 system("cls");
     switch(opcao){
	 
	 
	  case 1:
	  	
	  	cout << "Precisamos de seu e-mail e sua senha.\n\n";
     
	 do{
	 
	     cout << "Digite o seu e-mail:";
	     cin >> usuario;
	     
		 cout << "Digite a sua senha:";
		 cin >> senha;
		 
		 if (usuario == "willmcpe44@gmail.com" && senha == "Snap@@0205"){
		 
		     cout <<"Login realizado com sucesso!\n\n";
		     login_sucesso=true;
		      
		 
		 }else
	     {
		    cout <<"Seu e-mail ou sua senha devem estar inorrectos, por favor tente novamente! \n\n";
		 }
	 
	 
	 }while(!login_sucesso);
	 
	 
	 break;
	 
	 
	 
	 case 2:
	 	
	 	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 }

     
	 
	 setlocale(LC_ALL,"Portuguese");

  
  
     cout <<"Olá";
     cout <<"\nQual é o seu número de telefone?:";
     cin >> numero;
     cout <<"\nQual é o seu nome?:";
     cin >> nome;
     cout <<"\nBem-vindo(a) ao Heetch!";
     cout <<"\nOnde estás?:";
     printf("\n1.Bacia de Retenção do Coelho");
	 printf("\n2.Bairro da Bandeira");
	 printf("\n3.Bairro das Salinas"); 
	 printf("\n4.Bairro das Tendas");
	 printf("\n5.Bairro das Tendas");
	 printf("\n6.Bairro do");
	 printf("\n7.Bairro dos CTT");
	 printf("\n8.Bairro dos Saiotes");
	 printf("\n9.Bairro Indigena");
	 printf("\n10.Bairro Kikolo");
	 printf("\n11.Bairro Mande");
	 printf("\n12.Bairro Matadouro");
	 printf("\n13.Bairro Mundial");
	 printf("\n14.Bairro Nelito Soares");
	 printf("\n15.Bairro Sossego");
	 printf("\n16.Benfica");
	 printf("\n17.Boavista");
	 printf("\n18.Calemba");
	 printf("\n19.Calumbo");
	 printf("\n20.Camama");
	 printf("\n21.Cariango");
	 printf("\n22.Cassenda");
	 printf("\n23.Cazenga Popular");
	 printf("\n24.Chimbicato");
	 printf("\n25.Coreia");
	 printf("\n26.Corimba");
	 printf("\n27.Cuca");
     printf("\n28.Dangereux");
	 printf("\n29.Estalagem");
	 printf("\n30.Fubu");
	 printf("\n31.Gamek");
	 printf("\n32.Gamek a Direita");
     printf("\n33.Golf");
	 printf("\n34.Golf II");
	 printf("\n35.Grafanil Bar");
	 printf("\n36.Iraque");
	 printf("\n37.Jacinto Chipa");
	 printf("\n38.Kapalanga");
	 printf("\n39.Kapalanga II");
	 printf("\n40.Kassequel");
	 printf("\n41.Kassequel do Buraco");
	 printf("\n42.Kifangondo");
	 printf("\n43.Kinanga");
	 printf("\n44.Mabor");
	 printf("\n45.Mabunda");
	 printf("\n46.Rangel");
	 printf("\n47.Rocha Pinto");
	 printf("\n48.Samba");
	 printf("\n49.Sambizanga");
	 printf("\n50.Sapu");
	 printf("\n51.São Paulo");
	 printf("\n52.Tala-Hady");
	 printf("\n53.Talatona");
	 printf("\n54.Terra Nova");
	 printf("\n55.Triangulo");
	 printf("\n56.Vila Alice");
	 printf("\n57.Xuxa Dela");
	 printf("\n58.Zona Verde");
	 printf("\n59.Zona Verde II\n");
	 printf("Localidade:");
     scanf("%i",&localidade);
     
     switch(localidade){
     	
     	case 1:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 2:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 3:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 4:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 5:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 6:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 7:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 8:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 9:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 10:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 11:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 12:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 13:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 14:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 15:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 16:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 17:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 18:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 19:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 20:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 21:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 22:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 23:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 24:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 25:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 26:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 27:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 28:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 29:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 30:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 31:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 32:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 33:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 34:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 35:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 36:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 37:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 38:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 39:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 40:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 41:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 42:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 43:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 44:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 45:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 46:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 47:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 48:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 49:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 50:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 51:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 52:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 53:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 54:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 55:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 56:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 57:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 58:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break;
     	
     	case 59:
     		
     	printf("Wilcar, comece sua corrida hoje");
     	
     	break; 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 }
     return 0;

}



