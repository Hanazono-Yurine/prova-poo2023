#include "LocacaoResidencial.h"
#include <iostream>
#include <stdexcept>

using namespace std;

LocacaoResidencial::LocacaoResidencial(string endereco, double preco, int vencimento, int quartos) : Locacao(endereco, preco, vencimento), quartos(quartos) {
}

LocacaoResidencial::~LocacaoResidencial() {
}

int LocacaoResidencial::getQuartos() {
    return this->quartos;
}

double LocacaoResidencial::calcularTotal(int diasAntecipados) {
    if (diasAntecipados < 0) throw new std::invalid_argument("Dias antecipados deve ser maior ou igual a 0");

    if (diasAntecipados >= 5) return this->getPreco() * (1 - 0.1);

    return this->getPreco();

}

void LocacaoResidencial::imprimir() {
    cout << "LocacaoResidencial: " << getEndereco() << " - " << getQuartos() << " quarto(s), R$ " << getPreco() << " - Vencimento: " << getVencimento() << "\n";
}