#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "headers/jogador.h"
#include "headers/inimigo.h"
#include "headers/itens.h"
using namespace std;

void cleanConsole() {
    system("clear");
}

void print(const string& texto) {
    for (size_t i = 0; i < texto.size(); i++) {
        cout << texto[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(40));
    }
}

void MenuPrincipal() {
    print("RPG EM TURNOS\n");
    print("1. Novo Jogo\n"); // Ainda não sei como fazer
    print("2. Carregar jogo\n"); // Ainda não sei como fazer
    print("3. Sair\n");
    print("Opção: ");
}

void MenuAcao(Jogador& player, Inimigo& enemy){
    print("=====================================\n");
    player.GetJogadorInfo(player);
    print("=====================================\n");
    enemy.GetInimigoInfo(enemy);
    print("=====================================\n");
    print("= ATAQUE = SELECIONAR ITEM = PASSAR =\n");
    print("==== 1 ========= 2 =========== 3 ====\n");
}
