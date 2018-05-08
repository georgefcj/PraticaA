#ifndef CHOCOLATE_HPP
#define CHOCOLATE_HPP
#include <string>
#include "nao_duravel.hpp"
using namespace std;

class Chocolate : public Nao_Duravel {
    private:
        string quantidade;
    public:
        Chocolate();
        void set_quantidade(string quantidade);
        void detalhes();
};
#endif // CHOCOLATE_HPP
