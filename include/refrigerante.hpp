#ifndef REFRIGERANTE_HPP
#define REFRIGERANTE_HPP
#include <string>
#include "nao_duravel.hpp"
using namespace std;

class Refrigerante : public Nao_Duravel {
    private:
        string tipo;
    public:
        Refrigerante();
        void set_tipo(string tipo);
        void detalhes();
};
#endif // REFRIGERANTE_HPP
