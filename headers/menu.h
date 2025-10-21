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

void showJogador(const Jogador& player) {
    printf("Nome: %s", player.Nome.c_str());
    printf("Vida: %iHP", player.Vida);
}

void showInimigo(const Inimigo& enemy) {
    printf("Inimigo: %s", enemy.Nome.c_str());
    printf("Vida: %iHP", enemy.Vida);
}

void MenuAcao(){
    cout << "=====================================" << endl;
    cout << "= ATAQUE = SELECIONAR ITEM = PASSAR =" << endl;
    cout << "==== 1 ========= 2 =========== 3 ====" << endl;
}