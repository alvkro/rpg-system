#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "menu.h"
#include "inimigo.h"
#include "jogador.h"
#include "itens.h"
using namespace std;

// Colocar uma biblioteca para randomizar os ataques que nem no Dota (seria uma adição legal...)

bool Combate(Jogador& player, Inimigo& enemy);
int randomAttack_J(Jogador& player);
int randomAttack_E(Inimigo& enemy);
bool isMissed();
