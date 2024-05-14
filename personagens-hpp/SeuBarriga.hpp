#ifndef SEUBARRIGA
#define SEUBARRIGA
#include "../core-simulador-hpp/Personagem.hpp"
class SeuBarriga : public Personagem
{
public:
    SeuBarriga(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};
#endif