#include <iostream>
#include "../include/chocolate.hpp"
using namespace std;

Chocolate::Chocolate() {
    this->quantidade = "\0";
}

void Chocolate::set_quantidade(string quantidade) {
    this->quantidade = quantidade;
}

void Chocolate::detalhes() {
    Nao_Duravel::detalhes();
    cout << "Quantidade: " << this->quantidade << endl;
}
