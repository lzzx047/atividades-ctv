#include <iostream>
 
using namespace std;
 
int main() {
    // Declara um vetor de inteiros com 5 posições
    int valores[5];
 
    cout << "--- Preenchendo o vetor ---" << endl;
    // 1. Lendo os cinco valores (o contador 'i' vai de 0 até 4)
    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor para a posicao " << i + 1 << ": ";
        cin >> valores[i];
    }
 
    cout << "\n--- Valores digitados na mesma ordem ---" << endl;
    // 2. Imprimindo os valores na mesma ordem
    for (int i = 0; i < 5; i++) {
        cout << valores[i] << endl;
    }
 
    return 0;
}