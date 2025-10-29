#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "headers/jogador.h"
#include "headers/inimigo.h"
#include "headers/itens.h"
using namespace std;

void MenuPrincipal() {
    cout << "RPG EM TURNOS\n";
    cout << "1. Novo Jogo\n"; // Ainda não sei como fazer
    cout << "2. Carregar jogo\n"; // Ainda não sei como fazer
    cout << "3. Sair\n";
    cout << "Opção: ";
}

void MenuAcao(Jogador& player, Inimigo& enemy){
    cout << "=====================================\n";
    player.showJogador(player);
    cout << "=====================================\n";
    enemy.showInimigo(enemy);
    cout << "= ATAQUE = SELECIONAR ITEM = PASSAR =\n";
    cout << "==== 1 ========= 2 =========== 3 ====\n";
}
