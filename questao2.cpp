#include <iostream>

const int TAM = 10; //Define a capacidade máxima da pilha
int pilha[TAM];
int topo = -1;

//Verifica se a pilha está cheia
bool estaCheia(){
    return topo == TAM - 1;
}

//Verifica se a pilha está vazia
bool estaVazia(){
    return topo == -1;
}

//Empilha os elementos (push)
void empilhar(int valor){
    if (estaCheia()){
        std::cout << "A pilha está cheia.";
        return;
    }

    topo ++;
    pilha[topo] = valor;
    std::cout << "Elemento: " << valor << " empilhado.\n";
}

//Desempilha os elementos
void desempilhar(){
    if (estaVazia()){
        std::cout << "A pilha está vazia";
        return;
    }

    std::cout << "Desempilhando: " << pilha[topo] << "\n";
    topo--;
}

//Consulta o elemento que está no topo da pilha
void consultarTopo(){
    if(estaVazia()){
        std::cout<< "A pilha está vazia.";
        return;
    }

    std::cout << "Elemento no topo: " << pilha[topo] << "\n";
}

//Exibe a pilha
void exibirPilha(){
    if (estaVazia()){
        std::cout << "A pilha está vazia";
        return;
    }

    std::cout << "Pilha: "<< std:: endl;
    for (int i = topo; i>= 0; i--){
        std::cout << pilha[i] << "\n";
    }
}

int main(){
    empilhar(10);
    empilhar(20);
    empilhar(30);
    empilhar(40);
    empilhar(50);
    empilhar(60);
    empilhar(70);
    empilhar(80);
    empilhar(90);
    std::cout <<"\n";
    exibirPilha();
    std::cout <<"\n";
    consultarTopo();
    std::cout <<"\n";
    desempilhar();
    std::cout <<"\n";
    exibirPilha();
    std::cout <<"\n";
    consultarTopo();

    return 0;
}
