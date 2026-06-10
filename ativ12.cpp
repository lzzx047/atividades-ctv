#include <iostream>
 
using namespace std;
 
int main() {
    // Declara uma matriz com 2 linhas e 3 colunas
    int matriz[2][3];
 
    cout << "--- Inserindo valores na Matriz 2x3 ---" << endl;
    // 1. Ciclos para ler os valores
    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            cout << "Valor para a posicao [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
 
    cout << "\n--- Matriz em formato de tabela ---" << endl;
    // 2. Ciclos para imprimir os valores como uma tabela
    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            // O "\t" cria um espaco para alinhar os numeros lado a lado
            cout << matriz[linha][coluna] << "\t"; 
        }
        // O "endl" salta para a linha de baixo apos imprimir todas as colunas de uma linha
        cout << endl; 
    }
 
    return 0;
}