#include <stdio.h>
#include <locale.h>

int idade1,idade2;

main(void){

setlocale(LC_ALL,"Portuguese");

printf("Informe a data de nascimento do primeiro indivíduo:");
scanf("%i",&idade1);

printf("Informe a data de nascimento do segundo indivíduo:");
scanf("%i",&idade2);


if (idade1<idade2){
    
     printf("O primeiro indivíduo nasceu primeiro!");

}else{

 printf("O segundo indivíduo nasceu primeiro!");

}




}
