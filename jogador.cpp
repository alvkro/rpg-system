#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <random>
#include "headers/mechanics.h"
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

    void Jogador::GetAtaqueInimigo(Jogador& player, Inimigo& enemy) {
        isMissed();
        if (isMissed() == true) {
            print("Errou o golpe!\n");
        }
        else {
           cout << player.Nome << " atacou " << enemy.Nome << "!\n";
           enemy.Vida -= randomAttack_J(player);
        }
    }

    char Jogador::SetItens() {
        int Escolha;
        char confirma;
        print("Escolha seus Items: (MÁXIMO DE 2)\n");
        for (int i = 1; i <= 2; i++) {
            for (int i = 0; i < BancoDeItems.size(); i++) {
                cout << i + 1 << ". " << BancoDeItems[i].Nome << endl;
            }
            cin >> Escolha;
            Inventario.push_back(BancoDeItems[Escolha - 1]);
        }
        print("Este é o seu inventário: ");
        for (int i = 0; i < Inventario.size(); i++) {
            cout << Inventario[i].Nome << ", ";
        }
        cout << "\n";
        print("Confirma? S/N: ");
        cin >> confirma;
        confirma = toupper(confirma);
        return confirma;
    }

    void Jogador::GetJogadorInfo(const Jogador& player) { 
        cout << "Nome: " << player.Nome << endl;
        cout << "Vida: " << player.Vida << "hp\n";
    } 

    void Jogador::SelectItem() { // Trabalhar nessa porra
        int Escolha;
        if (Inventario.empty()) {
            cout << "Inventário vazio!\n";
        }
        else {
            for (int i = 0; i < Inventario.size(); i++) {
                cout << i + 1 << ". " << Inventario[i].Nome << " (Poder: " << Inventario[i].pontos_de_acao << ")\n";
            }
            while(true) {
                cout << "Escolha um item:";
                cin >> Escolha;
                AtualItem.push_back(Inventario[Escolha - 1]);
                if(Escolha >= 1 && Escolha <= Inventario.size()) {
                    print("Item selecionado!");
                    break;
                }
                else {
                    cout << "Item Inválido! Tente novamente\n";
                }
            }
        }
    }