#include <iostream>
#include "Televisao.h"

using namespace std;

Televisao::Televisao(int volume, int canal){
  setVol(volume);
  setCanal(canal);

  cout << "Volume atual: " << getVol() <<endl;
  cout << "Canal atual: " << getCanal() <<endl;
}

void Televisao::setVol(int v){
    volume = v;
    }
void Televisao::setCanal(int c){
    canal = c;
}
int Televisao::getVol(){return volume;}
int Televisao::getCanal(){return canal;}

void Televisao::aumentaVol(){
    if(getVol() < 30){
    setVol(getVol() + 1);
    } else {setVol(30);
    }
}

void Televisao::diminuiVol(){
    if(getVol() > 0){
    setVol(getVol() - 1);
    } else {setVol(0);
    }
}

void Televisao::aumentaCanal(){
    if(getCanal() < 100){
        setCanal(getCanal() + 1);
    } else {setCanal(100);
    }
}

void Televisao::diminuiCanal(){
    if(getCanal() > 0){
        setCanal(getCanal() - 1);
    } else {setCanal(0);
    }
}

void Televisao::selecionaCanal(int channel){
    setCanal(channel);
}

int main()
{
    int vol, can;
    cout << "Qual o canal? " <<endl;
    cin >> can;
    cout << "Qual o volume desejado? " <<endl;
    cin >> vol;

    Televisao *tele = new Televisao(vol, can);

    tele->aumentaVol();

    cout << "Volume Modificado: " << tele->getVol() <<endl;

    delete tele;

    return 0;
}
