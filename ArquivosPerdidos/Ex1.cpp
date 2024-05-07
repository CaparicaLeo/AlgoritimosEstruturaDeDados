#include <iostream> 
using namespace std;
int main(){
    int *vetor;
    vetor = new int[10];

    for(int i=0, j=2; i<10, j<30; i++, j+=3){
        vetor[i]=j;
    }
    cout << "Vetor" << endl;
    for(int i=0;i<10;i++){
        cout << "V[" << i << "] = " << vetor[i] << endl;
    }
    delete[] vetor;

    return 0;
}