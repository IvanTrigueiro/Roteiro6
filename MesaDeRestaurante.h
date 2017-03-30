#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <iostream>
#include "Pedido.h"
using namespace std;


class MesaDeRestaurante
{
    public:
        MesaDeRestaurante(Pedido ped);
        void printMesa();
    private:
        Pedido pedidos;
};

#endif // MESADERESTAURANTE_H
