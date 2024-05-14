#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool verificaEscopos(const string& expressao) {
    stack<char> pilha;
    for (char c : expressao) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty()) {
                return false;
            }
            char topo = pilha.top();
            pilha.pop();
            if ((c == ')' && topo != '(') || (c == ']' && topo != '[') || (c == '}' && topo != '{')) {
                return false;
            }
        }
    }
    return pilha.empty();
}

int main() {
    string expressao;
    cout << "Digite a expressao matematica: ";
    getline(cin, expressao);

    if (verificaEscopos(expressao)) {
        cout << "Os escopos estao corretos." << endl;
    } else {
        cout << "Os escopos estao incorretos." << endl;
    }

    return 0;
}
