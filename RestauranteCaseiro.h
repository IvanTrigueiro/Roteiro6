#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesas[30];
        double total;
        int contPed;

    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido, int);
        double calculaTotalRestaurante();
};

#endif // RESTAURANTECASEIRO_H
