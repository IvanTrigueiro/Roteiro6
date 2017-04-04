#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    contPed = 0;
}

void RestauranteCaseiro::adicionaAoPedido(Pedido ped, int num){
    mesas[num].adicionaAoPedido(ped);
    contPed++;
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    for(int i = 0; i < contPed; i++){
        total += mesas[i].calculaTotal();
    }
    return total;
}
