#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string.h>
using namespace std;

class Pedido
{

private:
    int numero, quantidade;
    double preco;
    string descricao;
public:
    Pedido(int n, int q, double p, string d);
    void imprimePedido();
};

#endif // PEDIDO_H
