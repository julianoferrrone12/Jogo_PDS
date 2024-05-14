#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Minas.hpp"

Minas::Minas(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Minas::getDescricaoArma()
{
    return this->descricaoArma;
}

int Minas::getResistencia()
{
    return this->resistencia;
}