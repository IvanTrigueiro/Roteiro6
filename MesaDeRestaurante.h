#ifndef MESA_RESTAURANTE_H_
#define MESA_RESTAURANTE_H_
#include "Pedido.h"
#include <string.h>

class MesaDeRestaurante{
private:
    Pedido pedidos[100];
    int numPedidos;
    double valorTotal;
public:
    MesaDeRestaurante();
    void adicionaAoPedido(Pedido p);
    void zeraPedidos();
    double calculaTotal();
};
#endif
