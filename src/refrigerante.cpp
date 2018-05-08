#include <iostream>
#include "../include/refrigerante.hpp"
using namespace std;

Refrigerante::Refrigerante() {
    this->tipo = "\0";
}

void Refrigerante::set_tipo(string tipo) {
    this->tipo = tipo;
}

void Refrigerante::detalhes() {
    Nao_Duravel::detalhes();
    cout << "Tipo: " << this->tipo << endl;
}
