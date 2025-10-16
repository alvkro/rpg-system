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
};

struct Inimigo {
    string Nome;
    int Vida;
};