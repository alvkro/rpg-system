#include <string>
#include <vector>
using namespace std;

class Item {
    public:
    string Nome;
    int Poder;
    TipoDeItem tipo;
};

enum class TipoDeItem {
    Espada,
    Escudo,
    Pocao,
};