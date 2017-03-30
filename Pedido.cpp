#include "Pedido.h"
#include <iostream>
#include <string.h>
using namespace std;

Pedido::Pedido(int n, int q, double p, string d)
{
    numero = n;
    quantidade = q;
    preco = p;
    descricao = d;
}

void Pedido::imprimePedido(){
    cout << numero << "/" << quantidade << "/" << preco << "/" << descricao <<endl;
}
