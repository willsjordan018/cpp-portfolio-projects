#include <iostream>
#include <string>
#include <locale.h>


class Login {
public:
    bool signIn() {
        std::string username, password;
     
	     setlocale(LC_ALL,"Portuguese");   
        
		std::cout << "Digite seu nome de usuário: ";
        std::getline(std::cin, username);

        std::cout << "Digite sua senha: ";
        std::getline(std::cin, password);
        
        if(username == "Wilcar" && password == "mcpe0205") {
            
			system("cls");
			std::cout << "\nAcesso permitido!\n";
            return true;
        } else {
            
			system("cls");
			std::cout << "\nAcesso negado! Usuário ou senha inválidos.\n";
            return false;
        }
    }
};

int main() {
    Login login;
    bool success = login.signIn();

    if(success) {
        // Aqui você pode continuar para o resto do programa.
    }

    return 0;
}

