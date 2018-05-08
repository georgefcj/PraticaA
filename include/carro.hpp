#ifndef CARRO_HPP
#define CARRO_HPP
#include <string>
#include "duravel.hpp"
using namespace std;

class Carro : public Duravel {
    private:
        string modelo;
        int ano;
    public:
        Carro();
        void set_modelo(string modelo);
        void set_ano(int ano);
        void detalhes();
};
#endif // CARRO_HPP
