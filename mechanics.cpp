#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "headers/menu.h"
#include "headers/inimigo.h"
#include "headers/jogador.h"
#include "headers/itens.h"
using namespace std;

// Adicionar função que incrementa ataques. 

int randomAttack_J(Jogador& player) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, player.Ataque);
    return dist(gen);
}

int randomAttack_E(Inimigo& enemy) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, enemy.Ataque);
    return dist(gen);
}

bool isMissed() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 1);
    if (dist(gen) == 0) {
        return false;
    }
    else if (dist(gen) == 1) {
        return true;
    }
    return false;
}

bool Combate(Jogador& player, Inimigo& enemy) {
    while (player.Vida >= 0 && enemy.Vida >= 0 ) {
        int action;
        MenuAcao(player, enemy);
        cin >> action;
        cleanConsole();
        
        switch (action)
        {
        case 1:
            player.GetAtaqueInimigo(player, enemy);
            cin.get();
            if (enemy.Vida <= 0) {
                return true;
            }
            break;
        case 2:
            player.SelectItem();
            player.UseItem(player);
            break;
        case 3:
            break;
        }

        enemy.GetInimigoAtaque(player, enemy);
        cin.get();
        cleanConsole();
        if (player.Vida <= 0) {
                return false;
            }
        }

        if (player.Vida <= 0) {
            return false;
        }
        else if (enemy.Vida <= 0) {
            return true;
        }
        return true;
}