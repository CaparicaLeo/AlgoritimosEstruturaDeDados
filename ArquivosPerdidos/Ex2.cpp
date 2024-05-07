#include <iostream>
using namespace std;

struct no {
    int info;
    no *link;
};


int main(){
    int total = 0, contador = 0, media;
    no *inicio = new no;
    inicio->info = 5;
    inicio->link = new no;
    inicio->link->info = 15;
    inicio->link->link = new no;
    inicio->link->link->info = 18;
    inicio->link->link->link = new no;
    inicio->link->link->link->info = 27;
    inicio->link->link->link->link = new no;
    inicio->link->link->link->link->info = 57;
    inicio->link->link->link->link->link = new no;
    inicio->link->link->link->link->link->info = 8;
    inicio->link->link->link->link->link->link = new no;
    inicio->link->link->link->link->link->link->info = 80;
    inicio->link->link->link->link->link->link->link = nullptr;
    no *atual = inicio;
    while(atual != nullptr){
        total += atual->info;
        atual = atual->link;
        contador++;
    }
    media = total/contador;
    cout << "A media e: " << media << endl;
    return 0;
}