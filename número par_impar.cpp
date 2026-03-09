#include <stdio.h>
#include <locale.h>
int main() {
int numero;

setlocale(LC_ALL,"Portuguese");

printf("Insira o número em questão:");
scanf("%i",&numero);
if(numero % 2 == 0)
{
  printf("O número inserido é par");
}
else 
     printf("O número inserido é impar");
	 }
