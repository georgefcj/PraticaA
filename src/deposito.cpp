#include <iostream>
#include "../include/deposito.hpp"
using namespace std;

Deposito::Deposito() {
    this->tamanho = 1;
    this->produtos = new Produto[this->tamanho] {};
}

Deposito::~Deposito() {
    delete[] this->produtos;
}

void Deposito::ordenar() {
    for (int i = 0; i < this->tamanho; i++) {
        for (int j = i; j >= 1 && this->produtos[j].get_nome() < this->produtos[j-1].get_nome(); j--) {
            Produto tmp = this->produtos[j];
            this->produtos[j] = this->produtos[j-1];
            this->produtos[j-1] = tmp;
        }
    }
}

void Deposito::adicionar(Produto produto) {
    if (this->produtos[0].get_nome() == "\0") {
        this->produtos[0] = produto;
        ordenar();
    } else {
        tamanho++;
        Produto* tmp = new Produto[this->tamanho] {};
        for (int i = 0; i < this->tamanho-1; i++) {
            tmp[i] = this->produtos[i];
        }
        delete[] this->produtos;
        this->produtos = new Produto[this->tamanho] {};
        for (int i = 0; i < this->tamanho; i++) {
            this->produtos[i] = tmp[i];
        }
        delete[] tmp;
        ordenar();
        adicionar(produto);
    }
}

void Deposito::remover(Produto produto) {
    for (int i = 0; i < this->tamanho; i++) {
        if (this->produtos[i].get_nome() == produto.get_nome()) {
            produtos[i].set_nome("\0");
            produtos[i].set_preco(0);
            break;
        }
    }
    ordenar();
}

void Deposito::quantidade() {
    int quantidade = 0;
    for (int i = 0; i < this->tamanho; i++) {
        if (produtos[i].get_nome() != "\0") {
            quantidade++;
        }
    }
    cout << "Quantidade: " << quantidade << endl;
}

void Deposito::esta_vazio() {
    if (produtos[this->tamanho-1].get_nome() == "\0") {
        cout << "O depósito está vazio" << endl;
    } else {
        cout << "O depósito não está vazio" << endl;
    }
}

void Deposito::maior_valor() {
    Produto maior_valor;
    for (int i = 0; i < this->tamanho; i++) {
        if (produtos[i].get_preco() > maior_valor.get_preco()) {
            maior_valor = produtos[i];
        }
    }
    cout << "Produto com maior valor: " << maior_valor.get_nome() << endl;
}


void Deposito::listar() {
    cout << "Lista de Produtos:" << endl;
    for (int i = 0; i < this->tamanho; i++) {
        if (produtos[i].get_nome() != "\0") {
            cout << "   - " << this->produtos[i].get_nome() << endl;
        }
    }
    cout << "" << endl;
}
