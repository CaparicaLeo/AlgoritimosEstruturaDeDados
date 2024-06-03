#include <iostream>
#include <queue>
#include <unistd.h>
#include <ctime>
using namespace std;

typedef struct{
    string nome;
    string escolha;
    int pontos;
}Jogador;

void adicionaPontos(Jogador *jogadores, queue<string> ordem){
    if(ordem.front() != ordem.back()){
        if ((ordem.front() == "Pedra" && ordem.back() == "Tesoura") ||
               (ordem.front() == "Tesoura" && ordem.back() == "Papel") ||
               (ordem.front() == "Papel" && ordem.back()  == "Pedra")) {
        jogadores[0].pontos++;
        }
        else{
            jogadores[1].pontos++;
        }
    }
}
int main(){
    Jogador jogadores[2];
    queue<string> ordem;

    cout << "BEM VINDO AO PAPEL E TESOURA!" << endl;
    cout << "Nome do Primeiro jogador: ";
    cin >> jogadores[0].nome;
    cout << "Nome do Segundo jogador";
    cin >> jogadores[1].nome;
    cout << "Vamos começar...";
    system("cls");
    jogadores[0].pontos = 0;
    jogadores[1].pontos = 0;
    for(int i=0;i<20;i++){
        for(int j=0;j<2;j++){
            system("cls");
            cout << "RODADA " << i+1 << endl;
            cout << "Pontos de " << jogadores[0].nome << ": " << jogadores[0].pontos << endl;
            cout << "Pontos de " << jogadores[1].nome << ": " << jogadores[1].pontos << endl;
            cout << "Pedra, Papel ou Tesoura: ";
            cin >> jogadores[j].escolha;
            ordem.push(jogadores[j].escolha);
            adicionaPontos(jogadores, ordem);
        }
        ordem.pop();
        ordem.pop();
    }
    if(jogadores[0].pontos > jogadores[1].pontos){
        cout << jogadores[0].nome << "VENCEU!!!" << endl;
    }
    else if(jogadores[0].pontos < jogadores[1].pontos){
        cout << jogadores[1].nome << "VENCEU!!!" << endl;
    }
    else{
        cout << "EMPATE" << endl;
    }
}