#include <iostream>
#include "../include/carro.hpp"
using namespace std;

Carro::Carro() {
    this->modelo = "\0";
    this->ano = 0;
}

void Carro::set_modelo(string modelo) {
    this->modelo = modelo;
}

void Carro::set_ano(int ano) {
    this->ano = ano;
}

void Carro::detalhes() {
    Duravel::detalhes();
    cout << "Modelo: " << this->modelo << endl;
    cout << "Ano: " << this->ano << endl;
}
