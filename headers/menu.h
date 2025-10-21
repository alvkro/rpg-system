#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "jogador.h"
#include "inimigo.h"
#include "itens.h"
using namespace std;

void MenuPrincipal() {
    cout << "RPG EM TURNOS\n";
    cout << "1. Novo Jogo"; // Ainda não sei como fazer
    cout << "2. Carregar jogo"; // Ainda não sei como fazer
    cout << "3. Sair";
}

void MenuAcao(Jogador& player, Inimigo& enemy){
    cout << "=====================================\n";
    player.showJogador(player);
    cout << "=====================================\n";
    enemy.showInimigo(enemy);
    cout << "= ATAQUE = SELECIONAR ITEM = PASSAR =\n";
    cout << "==== 1 ========= 2 =========== 3 ====\n";
}