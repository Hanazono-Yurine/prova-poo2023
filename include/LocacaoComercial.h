#ifndef LOCACAO_COMERCIAL_H
#define LOCACAO_COMERCIAL_H

#include <string>
#include "Locacao.h"

using namespace std;

class LocacaoComercial : public Locacao {
    public:
        LocacaoComercial(string endereco, double preco, int vencimento, int area);
        virtual ~LocacaoComercial();
        int getArea();
        double calcularTotal(int diasAntecipadosarea);
        void imprimir();

    private:
        int area = 0;
};

#endif