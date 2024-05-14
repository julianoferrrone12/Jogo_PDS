#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Arco.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../acessorios-hpp/Pistola.hpp"
#include "../acessorios-hpp/Raios.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Barreira.hpp"
#include "../acessorios-hpp/Espelho.hpp"
#include "../acessorios-hpp/Minas.hpp"
#include "../acessorios-hpp/Muralha.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chapolin.hpp"
#include "../personagens-hpp/Girafales.hpp"
#include "../personagens-hpp/Quico.hpp"
#include "../personagens-hpp/SeuBarriga.hpp"
#include "../personagens-hpp/SeuMadruga.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque *arma = new Rosa("Super Rosa Amarela", 0, 10);
    ArmaAtaque *arma2 = new Colher("Colher de Pata", 0, 50);
    ArmaAtaque *arma3 = new Arco("Arco de Fogo", 0, 50);
    ArmaAtaque *arma4 = new Espada("Espada de Energia", 0, 50);
    ArmaAtaque *arma5 = new Lanca("Lanca de Gelo", 0, 50);
    ArmaAtaque *arma6 = new Pistola("Pistola de Plasma", 0, 50);
    ArmaAtaque *arma7 = new Raios("Arma de Raios", 0, 50);
    ArmaDefesa *escudo = new Escudo("Latao", 1);
    ArmaDefesa *armadura = new Armadura("Armadura Reforcada", 1);
    ArmaDefesa *barreira = new Barreira("Barreira de Gelo", 1);
    ArmaDefesa *espelho = new Espelho("Escudo de Reflexao:", 1);
    ArmaDefesa *minas = new Minas("Campo de Minas", 1);
    ArmaDefesa *muralha = new Muralha("Muralha de Pedra", 1);

    Personagem *p1 = new Chaves(1, "Chaves", 100, arma2, escudo);
    Personagem *p3 = new Chapolin(2, "Chapolin", 100, arma3, minas);
    Personagem *p5 = new Girafales(3, "Girafales", 100, arma, espelho);

    Personagem *p2 = new Quico(4, "Quico", 100, arma7, barreira);
    Personagem *p4 = new SeuBarriga(5, "Seu Barriga", 100, arma4, muralha);
    Personagem *p6 = new SeuMadruga(6, "Seu Madruga", 100, arma5, armadura);

    Simulador *simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);

    simulador->iniciarSimulacao();

    system("pause");
    return 0;
}