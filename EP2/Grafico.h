#ifndef GRAFICO_H
#define GRAFICO_H

#include <string>
#include "Eixo.h"
#include "Serie.h"
#include "Tela.h"

class Eixo {
    protected:
        Eixo* x;
        Eixo* y;
        Serie* serie;
    public:
        /**
        * Cria um grafico informando os eixos e a serie.
        */
        Grafico(Eixo* x, Eixo* y, Serie* Serie);
        virtual ~Grafico();

        Eixo* getEixoX();
        Eixo* getEixoY();
        Serie* getSerie();
        /**
        * Desenha o grafico na tela.
        */
        void desenhar();
};

#endif // EIXO_H
