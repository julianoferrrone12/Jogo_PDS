#ifndef RAIOS
#define RAIOS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Raios : public ArmaAtaque
{
public:
    Raios(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif