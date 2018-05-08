#include <iostream>
#include "../include/livro.hpp"
using namespace std;

Livro::Livro() {
    this->autor = "\0";
    this->sinopse = "\0";
}

void Livro::set_autor(string autor) {
    this->autor = autor;
}

void Livro::set_sinopse(string sinopse) {
    this->sinopse = sinopse;
}

void Livro::detalhes() {
    Duravel::detalhes();
    cout << "Autor: " << this->autor << endl;
    cout << "Sinopse: " << this->sinopse << endl;
}

