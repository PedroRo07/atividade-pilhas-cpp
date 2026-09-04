#include <iostream>
#include <string>

int main(){
    std::string palavra;

    std::cout << "Digite a palavra para verificar se é palíndromo ";
    std::cin >> palavra;

    int tam = palavra.length();
    bool palindromo = true;

    for (int i = tam - 1; i >= 0; i--){
        int indiceOposto = tam - 1 - i;

        if (palavra[i] != palavra[indiceOposto]){
            palindromo = false;
            break;
        }    
    }

    if(palindromo){
        std::cout << "A palavra é um palíndromo";
    }else{
        std::cout << "A palavra não é um palíndromo";
    }
    return 0;
}