#include "Locacao.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Locacao::Locacao(string endereco, double preco, int vencimento) : endereco(endereco), preco(preco), vencimento(vencimento) {
    if (preco <= 0) throw new std::invalid_argument("Preco informado invalido");

    if (vencimento < 1 || vencimento > 31) throw new std::invalid_argument("Vencimento deve ser um dia valido");
}

Locacao::~Locacao() {}

string Locacao::getEndereco() {
    return this->endereco;
}

double Locacao::getPreco() {
    return this->preco;
}

void Locacao::setPreco(double novo) {
    if (novo <= 0) throw new std::invalid_argument("Preco informado invalido");

    this->preco = novo;
}

int Locacao::getVencimento() {
    return this->vencimento;
}