#include <iostream>
 
using namespace std;
 
int main() {
    int X;
 
    // O laço "do" (faça) executa o código pelo menos uma vez
    do {
        cout << "Digite um numero inteiro (nao pode ser negativo): ";
        cin >> X;
    } while (X < 0); // O "while" (enquanto) repete se a condição for verdadeira
 
    cout << "\nNumero valido: " << X << endl;
 
    return 0;
}