
#ifndef TELE_H_

class Televisao{
private:
    int volume;
    int canal;
public:
    Televisao(int volume, int canal);

    void aumentaVol();
    void diminuiVol();

    void aumentaCanal();
    void diminuiCanal();
    void selecionaCanal(int channel);

    void setVol(int v);
    void setCanal(int c);

    int getVol();
    int getCanal();
};


#endif // TELE_H_
