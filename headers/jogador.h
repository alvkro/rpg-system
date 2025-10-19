#include <iostream>
#include <vector>
#include <string>
#include "classes/inimigo.h"
#include "classes/itens.h"
using namespace std;

class Jogador {
    public:
    string Nome;
    int Vida;
    int Ataque;

    // Funções:

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