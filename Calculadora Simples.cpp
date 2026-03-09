#include <iostream>

int main() {
    int num1, num2;
    char operacao;

    std::cout << "Insira dois números: ";
    std::cin >> num1 >> num2;
    std::cout << "Insira a operação (+, -, *, /): ";
    std::cin >> operacao;

    switch(operacao) {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 * num2 << std::endl;
            break;
        case '/':
            if(num2 != 0)
                std::cout << num1 / num2 << std::endl;
            else
                std::cout << "Divisão por zero não é permitida" << std::endl;
            break;
        default:
            std::cout << "Operação inválida" << std::endl;
    }

    return 0;
}

