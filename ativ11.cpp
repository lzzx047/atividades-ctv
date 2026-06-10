#include <iostream>
 
using namespace std;
 
int main() {
    int vetor[5];
    int soma = 0; // A soma deve comecar sempre em zero
 
    cout << "--- Preenchendo o vetor ---" << endl;
    // O ciclo vai da posicao 0 ate a 4 (5 valores no total)
    for(int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
        // Acumula o valor introduzido na variavel soma
        soma = soma + vetor[i]; 
    }
 
    // Imprime o resultado final fora do ciclo
    cout << "\nSoma do vetor: " << soma << endl;
 
    return 0;
}