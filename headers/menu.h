#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "jogador.h"
#include "inimigo.h"
#include "itens.h"
using namespace std;

void MenuPrincipal();
void MenuAcao(Jogador& player, Inimigo& enemy);
