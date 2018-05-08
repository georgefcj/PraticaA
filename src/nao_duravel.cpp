#include <iostream>
#include "../include/nao_duravel.hpp"
using namespace std;

Nao_Duravel::Nao_Duravel() {
    this->data_validade = "\0";
    this->genero = "\0";
}


void Nao_Duravel::set_data_validade(string data_validade) {
    this->data_validade = data_validade;
}

void Nao_Duravel::set_genero(string genero) {
    this->genero = genero;
}

void Nao_Duravel::detalhes() {
    Produto::detalhes();
    cout << "Data de Validade: " << this->data_validade << endl;
    cout << "Gênero: " << this->genero << endl;
}
