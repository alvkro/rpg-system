#include <iostream>
#include <vector>
#include <string>
#include "itens.h"
using namespace std;

class Jogador { // Futuramente, fazer um sistema de classes (mago, guerreiro, paladino...)
    public:
    string Nome;
    int Vida = 100;
    int Ataque = 10;

    // Funções:

    Jogador DataPlayer(Jogador& player) {
        cout << "Selecione seu nome: ";
        cin >> player.Nome;
    }

    Item SelectItem() {
    int Escolha;
    if (Inventario.empty()) {
        cout << "Inventário vazio!\n";
        return {"", 0}; 
    }
    else {
        for (int i = 0; i < Inventario.size(); i++) {
            cout << i + 1 << ". " << Inventario[i].Nome << " (Poder: " << Inventario[i].Poder << ")\n";
        }
        while(true) {
            cout << "Escolha um item:";
            cin >> Escolha;
            if(Escolha >= 1 && Escolha <= Inventario.size()) {
                break;
            }
            else {
                cout << "Item Inválido! Tente novamente\n";
            }
        }
    }
    return Inventario[Escolha - 1];
}

    int AtaqueInimigo(Inimigo& enemy) {
        cout << Nome << " atacou " << enemy.Nome << "!\n";
        return enemy.Vida -= Ataque;
    }

    private:
    vector <Item> Inventario;
};