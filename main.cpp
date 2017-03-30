#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
using namespace std;

int main()
{
    Pedido pedobj(5, 2, 30, "acai");
    MesaDeRestaurante mesaobj(pedobj);
    mesaobj.printMesa();


    return 0;
}
