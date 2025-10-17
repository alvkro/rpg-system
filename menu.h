#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "structs.h"
using namespace std;

int MenuPrincipal(int& escolha) {
    int Escolha;
    cout << "RPG EM TURNOS\n";
    cout << "1. Novo Jogo"; // Ainda não sei como fazer
    cout << "2. Carregar jogo"; // Ainda não sei como fazer
    cout << "3. Sair";
    
    cin >> Escolha;
    return Escolha;
}



void showJogador(const Jogador& player) {
    printf("Nome: %s", player.Nome.c_str());
    printf("Vida: %iHP", player.Vida);
}

void showInimigo(const Inimigo& enemy) {
    printf("Inimigo: %s", enemy.Nome.c_str());
    printf("Vida: %iHP", enemy.Vida);
}