#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <string>
using namespace std;

class Produto {
    protected:
        string nome;
        double preco;
        string marca;
        string descricao;
        string data_fabricacao;
    public:
        Produto();
        string get_nome();
        void set_nome(string nome);
        double get_preco();
        void set_preco(double preco);
        void set_marca(string marca);
        void set_descricao(string descricao);
        void set_data_fabricacao(string data_fabricacao);
        void detalhes();
};
#endif // PRODUTO_HPP
