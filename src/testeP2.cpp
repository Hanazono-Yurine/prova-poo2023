#include <iostream>
#include "LocacaoResidencial.h"
#include "LocacaoComercial.h"
#include "LocacaoRegiao.h"

using namespace std;

void testeP2() {
    //0

    // 1
    LocacaoResidencial* prainha = new LocacaoResidencial("Rua A, 1423 - Prainha", 980.5, 8, 2);
    prainha->imprimir();

    //2
    prainha->setPreco(1010.0);
    cout << prainha->calcularTotal(6) << endl;

    //3
    LocacaoComercial* centro = new LocacaoComercial("Av. Sao Joao, 265 - Centro", 9500.0, 15, 30);
    cout << centro->calcularTotal(-10) << endl;

    //4
    LocacaoRegiao* r1 = new LocacaoRegiao("Rua das Irmas");
    LocacaoComercial* baelor = new LocacaoComercial("Grande Septo de Baelor", 45000.0, 1, 8200);
    r1->adicionarLocacao(baelor);
    r1->imprimir();

    //5
    LocacaoResidencial* dragoes = new LocacaoResidencial("Fosso dos Dragoes", 6520.9, 8, 5);
    r1->adicionarLocacao(dragoes);
    cout << r1->calcularTotal(15) << endl;

    //6
    delete centro;
    delete prainha;
    delete r1;


}

//void testeP2() {
    // Crie uma instancia de LocacaoResidencial com endereço "Rua A, 1423 - Prainha"
    // preço R$ 980.5, vencimento dia 8, 2 quartos e imprima

    // Altere o preço da locacao de R$ 980.5 para R$ 1010.0 e imprima o resultado
    // de calcularTotal com 6 dias de antecedência no pagamento pulando uma linha ao final

    // Crie uma instância de LocacaoComercial com endereço "Av. Sao Joao, 265 - Centro",
    // preço R$ 9500.0, vencimento dia 15 e 30m
    // Imprima o resultado de calcularTotal com um atraso de 10 dias (parâmetro igual a -10),
    // pulando uma linha ao final
 
    // Crie uma instância de LocacaoRegiao com regiao igual a "Rua das Irmas", armazena-a em uma variável chamada r1.
    // Além disso, crie uma nova LocacaoComercial com endereço "Grande Septo de Baelor", preço R$ 45000.0, vencimento dia 1 e
    // área 8200 m2. Adicione essa nova instância à r1. Imprima r1.

    // Crie uma instância de LocacaoResidencial com endereço "Fosso dos Dragoes", preço R$ 6520.9,
    // vencimento dia 8, 5 quartos e adicione à r1.
    // Em seguida, imprima o resultado de calcularTotal de r1 com 15 dias de antecedência no pagamento,
    // pulando uma linha ao final

	// Destrua todas as variáveis criadas. Atente-se a ordem da destruição das variáveis dada a implementação da classe LocacaoRegiao.

//}