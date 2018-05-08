#ifndef LIVRO_HPP
#define LIVRO_HPP
#include <string>
#include "duravel.hpp"
using namespace std;

class Livro : public Duravel {
    private:
        string autor;
        string sinopse;
    public:
        Livro();
        void set_autor(string autor);
        void set_sinopse(string sinopse);
        void detalhes();
};
#endif // LIVRO_HPP
