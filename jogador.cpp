#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "headers/menu.h"
#include "headers/jogador.h"
#include "headers/itens.h"
#include "headers/inimigo.h"

using namespace std;

    // Funções:

    char Jogador::GetNomeJogador(Jogador& player) {
        char confirm;
        print("Selecione seu nome: ");
        cin >> player.Nome;
        cout << "Seu nome é: " << player.Nome << ". Confirma?\n"; 
        print("Digite S/N: "); 
        cin >> confirm;
        confirm = toupper(confirm);
        cleanConsole();
        return confirm;
    }

   //Item SelectItem() {
   // int Escolha;
   // if (Inventario.empty()) {
   //     cout << "Inventário vazio!\n";
   //     return {"", 0}; 
   // }
   // else {
   //     for (int i = 0; i < player.Inventario.size(); i++) {
   //         cout << i + 1 << ". " << player.Inventario[i].Nome << " (Poder: " << Inventario[i].Poder << ")\n";
   //     }
   //     while(true) {
   //         cout << "Escolha um item:";
   //         cin >> Escolha;
   //         if(Escolha >= 1 && Escolha <= player.Inventario.size()) {
   //             break;
   //         }
   //         else {
   //             cout << "Item Inválido! Tente novamente\n";
   //         }
   //     }
   // }
   // return player.Inventario[Escolha - 1];
   // }

    void Jogador::GetAtaqueInimigo(Jogador& player, Inimigo& enemy) {
        cout << player.Nome << " atacou " << enemy.Nome << "!\n";
        enemy.Vida -= player.Ataque;
    }

    void Jogador::GetJogadorInfo(const Jogador& player) { 
        cout << "Nome: " << player.Nome << endl;
        cout << "Vida: " << player.Vida << "hp\n"; 
    }