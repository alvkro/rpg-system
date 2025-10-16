#include <iostream>
#include <string>
#include <vector>
#include "structs.h"
using namespace std;

void showJogador(const Jogador& player) {
    printf("Nome: %s", player.Nome);
    printf("Vida: %iHP", player.Vida);
}

void showInimigo(const Inimigo& enemy) {
    printf("Inimigo: %s", enemy.Nome);
    printf("Vida: %iHP", enemy.Vida);
}

void CreateItem(Item& item) {
    while (true) {
        printf("Digite o nome do seu item: ");
        cin >> item.Nome;

        printf("Digite o nível de poder do seu item: ");
        cin >> item.Poder;

        if (item.Nome == "0" || item.Poder == 0) {
            break;
        }
    }
}