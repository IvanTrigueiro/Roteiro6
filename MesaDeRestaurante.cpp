#include <iostream>
#include "MesaDeRestaurante.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
    numPedidos = 0;
    valorTotal = 0.0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    pedidos[numPedidos] = p;
    valorTotal += pedidos->getPreco();
    numPedidos++;
}

double MesaDeRestaurante::calculaTotal(){
    return valorTotal;
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < numPedidos; i++){
        pedidos[i].setQuantidade(0);
    }
    valorTotal = 0.0;
}
