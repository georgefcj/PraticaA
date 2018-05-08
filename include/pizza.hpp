#ifndef PIZZA_HPP
#define PIZZA_HPP
#include <string>
#include "nao_duravel.hpp"
using namespace std;

class Pizza : public Nao_Duravel {
    private:
        string tamanho;
    public:
        Pizza();
        void set_tamanho(string tamanho);
        void detalhes();
};
#endif // PIZZA_HPP
