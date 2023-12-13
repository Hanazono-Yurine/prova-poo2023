#include "LocacaoComercial.h"
#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

LocacaoComercial::LocacaoComercial(string endereco, double preco, int vencimento, int area) : Locacao(endereco, preco, vencimento), area(area) {
}

LocacaoComercial::~LocacaoComercial() {}

int LocacaoComercial::getArea() {
    return this->area;
}

double LocacaoComercial::calcularTotal(int diasAntecipados) {
    if (this->area <= 50) return this->getPreco();

    if (this->area > 50 && diasAntecipados >= 8) return this->getPreco() * (1 - 0.05);

    if (this->area > 50 && diasAntecipados < 0) return this->getPreco() + (this->getPreco() * 0.02) * (diasAntecipados * -1);

    return this->getPreco();
}

void LocacaoComercial::imprimir() {
    cout << "LocacaoComercial: " << getEndereco() << "," << getArea() << "m2, R$ " << getPreco() << " - Vencimento: " << getVencimento() << "\n";
}