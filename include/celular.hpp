#ifndef CELULAR_HPP
#define CELULAR_HPP
#include <string>
#include "duravel.hpp"
using namespace std;

class Celular : public Duravel {
    private:
        string espaco_armazenamento;
        string qualidade_camera;
    public:
        Celular();
        void set_espaco_armazenamento(string espaco_armazenamento);
        void set_qualidade_camera(string qualidade_camera);
        void detalhes();
};
#endif // CELULAR_HPP
