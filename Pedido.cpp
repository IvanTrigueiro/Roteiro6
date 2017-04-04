#include "Pedido.h"
#include <string.h>
Pedido::Pedido(){};
Pedido::Pedido(int numero, int quantidade, string descricao, double preco){
    setNumero(numero);
    setQuantidade(quantidade);
    setDescricao(descricao);
    setPreco(preco);
}

void Pedido::setNumero(int n){
    numero = n;
}

void Pedido::setQuantidade(int q){
    quantidade = q;
}

void Pedido::setDescricao(string d){
    descricao = d;
}

void Pedido::setPreco(double p){
    preco = p;
}

int Pedido::getNumero(){return numero;}
int Pedido::getQuantidade(){return quantidade;}
string Pedido::getDescricao(){return descricao;}
double Pedido::getPreco(){return preco;}
