#include <iostream>
#include "../include/produto.hpp"
using namespace std;

Produto::Produto() {
    this->nome = "\0";
    this->preco = 0.0;
    this->marca = "\0";
    this->descricao = "\0";
    this->data_fabricacao = "\0";
}


string Produto::get_nome() {
    return this->nome;
}

void Produto::set_nome(string nome) {
    this->nome = nome;
}

double Produto::get_preco() {
    return this->preco;
}


void Produto::set_preco(double preco) {
    this->preco = preco;
}

void Produto::set_marca(string marca) {
    this->marca = marca;
}

void Produto::set_descricao(string descricao) {
    this->descricao = descricao;
}

void Produto::set_data_fabricacao(string data_fabricacao) {
    this->data_fabricacao = data_fabricacao;
}

void Produto::detalhes() {
    cout << "Nome: " << this->nome << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Marca: " << this->marca << endl;
    cout << "Descrição: " << this->descricao << endl;
    cout << "Data de Fabricação: " << this->data_fabricacao << endl;
}
