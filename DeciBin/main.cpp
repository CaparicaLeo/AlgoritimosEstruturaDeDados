#include <iostream> 
#include <stack>
using namespace std;

int main(){
    stack<int> pilha;
    int decimal;
    cout << "Insira o numero para converter: ";
    cin >> decimal;

    for(int i=decimal; i>=1; i/=2){
        pilha.push(i%2);
    }
    cout << "Seu numero em binario: ";
    while(!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
    }

    return 0;

}