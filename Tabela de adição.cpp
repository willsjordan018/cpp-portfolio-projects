#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int num, aux;
    setlocale(LC_ALL,"Portuguese");

    cout << "Insira a tabuada de adição em questão:";
    cin >> num;

    for(aux=1 ; aux<=100 ; aux++)
        cout<<num<<" + "<<aux<<" = " << num+aux <<endl;
    
	
	cout << "\nInsira a tabuada de multiplicação em questão:";
    cin >> num;

    for(aux=1 ; aux<=100 ; aux++)
        cout<<num<<" * "<<aux<<" = " << num-aux <<endl; 
		
		
	cout << "\nInsira a tabuada de divisão em questão:";
    cin >> num;

    for(aux=1 ; aux<=100 ; aux++)
        cout<<num<<" / "<<aux<<" = " << num-aux <<endl;
		
	
	cout << "\nInsira a tabuada de subtração em questão:";
    cin >> num;

    for(aux=1 ; aux<=100 ; aux++)
        cout<<num<<" - "<<aux<<" = " << num-aux <<endl;		       
        

    return 0;
}
