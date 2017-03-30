#include "MesaDeRestaurante.h"
#include <iostream>
#include "Pedido.h"
using namespace std;

MesaDeRestaurante::MesaDeRestaurante(Pedido ped)
:pedidos(ped)
{
}


void MesaDeRestaurante::printMesa(){
    pedidos.imprimePedido();
}
