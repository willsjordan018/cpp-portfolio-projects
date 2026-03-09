#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string palavra_secreta = "ola";
    std::vector<char> palpites(palavra_secreta.length(), '_');

    int tentativas = 7;
    while (tentativas > 0) {
        char palpite;
        std::cout << "Digite um palpite: ";
        std::cin >> palpite;

        bool correto = false;
        for (int i = 0; i < palavra_secreta.length(); i++) {
            if (palavra_secreta[i] == palpite) {
                palpites[i] = palpite;
                correto = true;
            }
        }

        if (!correto) {
            tentativas--;
            std::cout << "Incorreto! Tentativas restantes: " << tentativas << std::endl;
        }

        for (char c : palpites) {
            std::cout << c << ' ';
        }
        std::cout << std::endl;

        if (palavra_secreta == std::string(palpites.begin(), palpites.end())) {
            std::cout << "Parabéns! Você adivinhou a palavra." << std::endl;
            return 0;
        }
    }

    std::cout << "Desculpe, você não adivinhou a palavra. A palavra era: " << palavra_secreta << std::endl;
    return 0;
}

