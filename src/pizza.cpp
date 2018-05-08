#include <iostream>
#include "../include/pizza.hpp"
using namespace std;

Pizza::Pizza() {
    this->tamanho = "\0";
}

void Pizza::set_tamanho(string tamanho) {
    this->tamanho = tamanho;
}

void Pizza::detalhes() {
    Nao_Duravel::detalhes();
    cout << "Tamanho: " << this->tamanho << endl;
}
