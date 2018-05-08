#ifndef DURAVEL_HPP
#define DURAVEL_HPP
#include <string>
#include "produto.hpp"
using namespace std;

class Duravel : public Produto {
    private:
        string material_predominante;
        string durabilidade;
    public:
        Duravel();
        void set_material_predominante(string material_predominante);
        void set_durabilidade(string durabilidade);
        void detalhes();
};
#endif // DURAVEL_HPP

