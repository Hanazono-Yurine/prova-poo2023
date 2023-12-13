#ifndef LOCACAO_REGIAO_H
#define LOCACAO_REGIAO_H

#include "Locacao.h"
#include <string>
#include <vector>

using namespace std;

class LocacaoRegiao {
    public:
        LocacaoRegiao(string regiao);
        virtual ~LocacaoRegiao();
        string getRegiao();
        void adicionarLocacao(Locacao* locacao);
        vector<Locacao*>* getLocacoes();
        double calcularTotal(int diasAntecipados);
        void imprimir();

    private:
        vector<Locacao*> locacoes;
        string regiao = "";
};

#endif