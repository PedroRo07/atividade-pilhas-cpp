#include <iostream>
#include <string>

int main(){
    std::string palavra;

    std::cout << "Digite a palavra a ser invertida: ";
    std::cin >> palavra;

    int tam = palavra.length();

    std::cout << "Palavra invertida: ";
    for (int i = tam - 1; i >= 0; i--){
        std::cout << palavra[i];
    }
    return 0;
}