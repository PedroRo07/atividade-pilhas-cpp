#include <iostream>
#include <stack>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    std::stack<int> pilha;
    int num;

    for (int i=0; i<5; i++){
        std::cout << "Número " << i+1 << ": ";
        std::cin >> num;
        pilha.push(num);
    }

    std::cout << "\n";
    std::cout << "Elemento no topo: " << pilha.top() << std::endl;

    std::cout << "\n";
    std::cout << "Quantidade de elementos armazenados: " << pilha.size() << std::endl;

    std::cout << "\n";
    pilha.pop();
    std::cout << "Elemento do topo removido." << std::endl;
    
    std::cout << "\n";
    std::cout << "Novo elemento do topo: " << pilha.top() << std::endl;
}