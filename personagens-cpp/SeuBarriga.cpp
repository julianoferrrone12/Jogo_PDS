#include "../personagens-hpp/SeuBarriga.hpp"

SeuBarriga::SeuBarriga(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int SeuBarriga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int SeuBarriga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string SeuBarriga::pegarDescricao()
{
    return "Sem desculpas, Senhor Madruga! O aluguel esta atrasado ha 14 meses!";
}