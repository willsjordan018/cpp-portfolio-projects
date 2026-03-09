#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(nullptr)); // use o horário atual como semente para o gerador aleatório
    std::cout << "Seus números da sorte são: ";
    for (int i = 0; i < 5; i++) {
        std::cout << std::rand() % 100 << " "; // gera um número aleatório entre 0 e 99
    }
    std::cout << std::endl;
    return 0;
}

