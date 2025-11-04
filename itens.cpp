#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "headers/jogador.h"
#include "headers/inimigo.h"
#include "headers/mechanics.h"
#include "headers/menu.h"
#include "headers/itens.h"
using namespace std;

vector <Item> SetItens(vector <Item>& Inventario) {
    char Escolha;
    print("Escolha seus Items: (MÁXIMO DE 2)\n");
    for (int i = 1; i <= 2; i++) {
        for (int i = 0; i < BancoDeItems.size(); i++) {
            cout << i << ". " << BancoDeItems[i].Nome;
        }
        Inventario.push_back(BancoDeItems[Escolha]);
    }
    print("Este é o seu inventário: ");
    for (int i = 0; i < Inventario.size(); i++) {
        cout << Inventario[i].Nome << endl;
    }
    print("Confirma? S/N: ");
    cin >> Escolha;
    toupper(Escolha);

    if (Escolha == 'S') {
        return Inventario;
    }
    else if (Escolha == 'N') {
        SetItens(Inventario);
    }
    return Inventario;
}