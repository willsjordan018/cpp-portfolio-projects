#include <iostream>
#include <map>
#include <string>

class PasswordRecoverySystem {
    std::map<std::string, std::string> users;  // user name, password

public:
    void addUser(std::string name, std::string password) {
        users[name] = password;
    }

    bool checkPassword(std::string name, std::string password) {
        return users[name] == password;
    }

    void resetPassword(std::string name, std::string newPassword) {
        users[name] = newPassword;
    }
};

int main() {
    PasswordRecoverySystem prs;

    // Adicione alguns usuários
    prs.addUser("Wilcar", "wilcar123");
    prs.addUser("Alexandre", "alexandre123");

    // Verifique algumas senhas
    std::cout << std::boolalpha << prs.checkPassword("Wilcar", "wilcar123") << std::endl;  // true
    std::cout << std::boolalpha << prs.checkPassword("Alexandre", "alexandre123") << std::endl;  // true

    // Redefina algumas senhas
    prs.resetPassword("Wilcar", "alexandre123");

    // Verifique a nova senha
    std::cout << std::boolalpha << prs.checkPassword("Wilcar", "alexandre123") << std::endl;  // true
    std::cout << std::boolalpha << prs.checkPassword("Wilcar", "alexandre123") << std::endl;  // false

    return 0;
}

