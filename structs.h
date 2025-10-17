#include <string>
#include <vector>
using namespace std;

struct Jogador {
    string Nome;
    int Ataque;
    int Vida;
    vector <Item> Inventario;
};

struct Item {
    string Nome;
    int Poder;
    TipoDeItem tipo;
};

struct Inimigo {
    string Nome;
    int Vida;
    int Ataque;
};

enum class TipoDeItem {
    Espada,
    Escudo,
    Pocao,
    Debuff,
    Buff
};