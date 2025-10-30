#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "jogador.h"
#include "inimigo.h"
#include "itens.h"
using namespace std;

void MenuPrincipal();
void MenuAcao(Jogador& player, Inimigo& enemy);
void print(const string& texto);
void cleanConsole();
