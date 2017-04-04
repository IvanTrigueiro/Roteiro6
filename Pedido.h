#include <iostream>
#ifndef PEDIDO_H_
#include <string.h>

using namespace std;

class Pedido{
private:
    int numero, quantidade;
    double preco;
    string descricao;
public:
    Pedido();
    Pedido(int numero, int quantidade, string descricao, double preco);

    void setNumero(int n);
    void setQuantidade(int q);
    void setDescricao(string d);
    void setPreco(double p);

    double getPreco();
    int getNumero();
    int getQuantidade();
    string getDescricao();
};


#endif
