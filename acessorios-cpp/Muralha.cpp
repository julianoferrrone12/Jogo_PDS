#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Muralha.hpp"

Muralha::Muralha(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Muralha::getDescricaoArma()
{
    return this->descricaoArma;
}

int Muralha::getResistencia()
{
    return this->resistencia;
}