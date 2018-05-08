#include <iostream>
#include "../include/duravel.hpp"
using namespace std;

Duravel::Duravel() {
    this->material_predominante = "\0";
    this->durabilidade = "\0";
}

void Duravel::set_material_predominante(string material_predominante) {
    this->material_predominante = material_predominante;
}

void Duravel::set_durabilidade(string durabilidade) {
    this->durabilidade = durabilidade;
}

void Duravel::detalhes() {
    Produto::detalhes();
    cout << "Material Predominante: " << this->material_predominante << endl;
    cout << "Durabilidade: " << this->durabilidade << endl;
}
