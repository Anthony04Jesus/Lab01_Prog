#include "relogio.h"

Relogio::Relogio() {}

void Relogio::setHorario(int hour, int min, int seg)
{
    horas = hour;
    minutos = min;
    segundos = seg;
}

void Relogio::getHorario(int& h, int& m, int& s)
{
    h = this->horas;
    m = this->minutos;
    s = this->segundos;
}

void Relogio::tick()
{

}
