#include <iostream>
#include "../include/celular.hpp"
using namespace std;

Celular::Celular() {
    this->espaco_armazenamento = "\0";
    this->qualidade_camera = "\0";
}

void Celular::set_espaco_armazenamento(string espaco_armazenamento) {
    this->espaco_armazenamento = espaco_armazenamento;
}

void Celular::set_qualidade_camera(string qualidade_camera) {
    this->qualidade_camera = qualidade_camera;
}

void Celular::detalhes() {
    Duravel::detalhes();
    cout << "Espaço de Armazenamento: " << this->espaco_armazenamento << endl;
    cout << "Qualidade da Câmera: " << this->qualidade_camera << endl;
}
