#ifndef ITENS_H
#define ITENS_H
#include <string>
#include <vector>
using namespace std;

enum class TipoDeItem {
    Espada,
    Escudo,
    Pocao,
};

class Item {
    public:
    string Nome;
    int Poder;
    TipoDeItem tipo;
};

#endif