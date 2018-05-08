#ifndef DEPOSITO_HPP
#define DEPOSITO_HPP
#include "produto.hpp"

class Deposito {
    private:
        Produto* produtos;
        int tamanho;
        void ordenar();
    public:
        Deposito();
        ~Deposito();
        void adicionar(Produto produto);
        void remover(Produto produto);
        void quantidade();
        void esta_vazio();
        void maior_valor();
        void listar();
};
#endif // DEPOSITO_HPP
