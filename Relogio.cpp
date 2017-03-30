#include <iostream>
#include "Relogio.h"

using namespace std;

Relogio::Relogio(int hora, int minuto, int segundo){
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);

    cout << "Hora: " << getHora() <<endl;

    cout << "Minuto: " << getMinuto() <<endl;

    cout << "Segundo: " << getSegundo() <<endl;
}

void Relogio::avancarHora(){
    if(getHora() == 24){
        setHora(0);
    }
    if(getSegundo() < 60){
        setSegundo(segundo +1);
    } else {
        setMinuto(minuto +1);
        setSegundo(0);
    }
    if(getMinuto() < 60){
        setMinuto(minuto +1);
    } else {
        setHora(hora +1);
        setMinuto(0);
    }
}

void Relogio::setHora(int h){
    if(h >= 1 && h <= 24){
        hora = h;
    } else {hora = 0;}
    }
void Relogio::setMinuto(int m){
    if(m >= 1 && m <= 60){
        minuto = m;
        } else {minuto = 0;}
    }
void Relogio::setSegundo(int s){
    if(s >= 1 && s <= 60){
        segundo = s;
    } else {segundo = 0;}
    }

int Relogio::getHora(){return hora;}
int Relogio::getMinuto(){return minuto;}
int Relogio::getSegundo(){return segundo;}

int main()
{
int hour, minute, second;


cout << "Digite o horario: (h/m/s) " << endl;
cin >> hour;
cin >> minute;
cin >> second;

Relogio *clock = new Relogio(hour, minute, second);

clock->avancarHora();

cout << "hour: " << clock->getHora() <<endl;
cout << "minute: " << clock->getMinuto() <<endl;
cout << "second: " << clock->getSegundo() <<endl;


delete clock;

return 0;
}


