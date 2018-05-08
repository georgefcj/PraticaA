#include <iostream>
#include "../include/carro.hpp"
#include "../include/livro.hpp"
#include "../include/celular.hpp"
#include "../include/pizza.hpp"
#include "../include/refrigerante.hpp"
#include "../include/chocolate.hpp"
#include "../include/deposito.hpp"
using namespace std;

int main() {

    Carro c;
    c.set_nome("Classic");
    c.set_preco(25000.0);
    c.set_marca("Chevrolet");
    c.set_ano(2014);

    Livro l;
    l.set_nome("Morte Súbita");
    l.set_preco(50.0);
    l.set_autor("J.K Rowling");

    Celular s;
    s.set_nome("Samsung Galaxy Pocket");
    s.set_preco(250.0);
    s.set_espaco_armazenamento("4GB");
    s.set_qualidade_camera("2MP");

    Pizza p;
    p.set_nome("Pizza Frango com Catupiry");
    p.set_preco(30.0);
    p.set_genero("Alimentício");
    p.set_tamanho("Família");

    Refrigerante r;
    r.set_nome("Fanta Guaraná");
    r.set_preco(3.0);
    r.set_genero("Bebidas");
    r.set_tipo("Lata");

    Chocolate ch;
    ch.set_nome("Chocolate Lacta - Laka Branco Diamante Negro");
    ch.set_preco(10.0);
    ch.set_genero("Alimentício");
    ch.set_quantidade("135g");

    Deposito d;

    d.adicionar(l);
    d.adicionar(c);
    d.adicionar(r);
    d.quantidade();
    d.maior_valor();

    d.remover(c);
    d.quantidade();
    d.maior_valor();

    d.remover(l);
    d.remover(r);
    d.esta_vazio();

    return 0;
}
