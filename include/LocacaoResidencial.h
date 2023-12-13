#ifndef LOCACAO_RESIDENCIAL_H
#define LOCACAO_RESIDENCIAL_H

#include <string>
#include "Locacao.h"

using namespace std;

class LocacaoResidencial : public Locacao {
    public:
        LocacaoResidencial(string endereco, double preco, int vencimento, int quartos);
        virtual ~LocacaoResidencial();
        int getQuartos();
        double calcularTotal(int diasAntecipados);
        void imprimir();

    private:
        int quartos = 0;
};

#endif