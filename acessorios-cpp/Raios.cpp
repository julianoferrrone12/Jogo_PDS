#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Raios.hpp"

Raios::Raios(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int Raios::gerarForcaAtaque()
{
    return maxForca;
}

string Raios::gerarRuidoAtaque()
{
    return "Zap";
}
