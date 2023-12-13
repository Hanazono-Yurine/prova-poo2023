#include "LocacaoRegiao.h"
#include <iostream>
#include <stdexcept>

using namespace std;

LocacaoRegiao::LocacaoRegiao(string regiao) : regiao(regiao) {
}

LocacaoRegiao::~LocacaoRegiao() {
    vector<Locacao*>::iterator it = this->locacoes.begin();

    while (it != this->locacoes.end()) {
        delete (*it);
        it++;
    }
}

string LocacaoRegiao::getRegiao() {
    return this->regiao;
}

void LocacaoRegiao::adicionarLocacao(Locacao* locacao) {
    this->locacoes.push_back(locacao);
}

vector<Locacao*>* LocacaoRegiao::getLocacoes() {
    return &this->locacoes;
}

double LocacaoRegiao::calcularTotal(int diasAntecipados) {
    if (this->locacoes.empty()) throw new std::logic_error("Deve haver ao menos 1 locacao");

    vector<Locacao*>::iterator it = this->locacoes.begin();

    double total = 0.0;

    while (it != this->locacoes.end()) {
        try {
            total += (*it)->calcularTotal(diasAntecipados);
        } catch(...) {
            total += (*it)->getPreco();
        }
        it++;
    }

    return total;
}

void LocacaoRegiao::imprimir() {
    cout << "LocacaoRegiao:" << getRegiao() << "\n";

    vector<Locacao*>::iterator it = this->locacoes.begin();

    while (it != this->locacoes.end()) {
        (*it)->imprimir();
        it++;
    }
}
