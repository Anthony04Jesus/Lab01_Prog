#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{
private:
    int segundos, minutos, horas;

public:
    Relogio();

    void setHorario(int hour, int min, int seg);
    void getHorario(int& h, int& m, int& s);
    void tick();
};

#endif // RELOGIO_H
