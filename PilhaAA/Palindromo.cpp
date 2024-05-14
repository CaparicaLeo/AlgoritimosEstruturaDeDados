#include <iostream>
#include <stack>
using namespace std;

bool isPalindromo(string palavra){
    string palavraInversa;
    stack<char> pilha;
    for (char c : palavra) {
        pilha.push(c);
    }
    while (!pilha.empty()) {
        palavraInversa.push_back(pilha.top());
        pilha.pop();
    }
    return palavra == palavraInversa;
}
int main(){
    string palavra;
    cout << "Digite a palavra: ";
    getline(cin, palavra);
    if (isPalindromo(palavra)) {
        cout << "e um palindromo." << endl;
    } else {
        cout << "Nao e um palíndromo." << endl;
    }
    return 0;
}