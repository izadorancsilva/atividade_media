// atividadeI.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main(){
    string nome;
    float p1, p2;
    float media;
    
    cout << "Digite o seu nome: \n";
    cin >> nome;

    cout << "Digite sua p1: \n";
    cin >> p1;

    cout << "Digite sua p2: \n";
    cin >> p2;

    media = (p1 + p2)/2;

    if (media >= 6) {
        cout << "Sua nota eh: " << media << "\n";
        cout << "Aprovado \n";
    }
    else {
        cout << "Sua nota eh: \n" << media << "\n";
        cout << "Reprovado \n";
    }
}