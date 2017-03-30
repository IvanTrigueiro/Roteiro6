
#ifndef DATA_H_
#define DATA_H_
class Relogio{
private:
    int hora, minuto, segundo;
public:
    Relogio(int hora, int minuto, int segundo);

    void setHora(int h);
    void setMinuto(int m);
    void setSegundo(int s);

    int getHora();
    int getMinuto();
    int getSegundo();

    //void setHorario(int hora, int minuto, int segundo);

    void avancarHora();
};

#endif
