#ifndef NAO_DURAVEL_HPP
#define NAO_DURAVEL_HPP
#include <string>
#include "produto.hpp"
using namespace std;

class Nao_Duravel : public Produto {
    private:
        string data_validade;
        string genero;
    public:
        Nao_Duravel();
        void set_data_validade(string data_validade);
        void set_genero(string genero);
        void detalhes();
};
#endif // NAO_DURAVEL_HPP
