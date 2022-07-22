#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaCorrente.hpp"
#include "Caixa.hpp"

using namespace std;

int main()
{
	Titular titularUm(Cpf("767.876.999-00"), "Fernando");
	ContaCorrente ContaUm("12345-0",titularUm);
	Titular titularDois(Cpf("777.886.865-01"), "Mauricio");
	ContaCorrente ContaDois("12365-1",titularDois);
	Titular titularTres(Cpf("788.000.897-02"), "Fernanda");
	ContaCorrente ContaTres("12365-1",titularTres);
	Titular titularQuatro(Cpf("88.666.55-3"), "Patricia");
	ContaPoupanca ContaQuatro("56789-0", titularQuatro);
	ContaUm.depositar( 200);

	ContaQuatro.depositar(200);
	ContaQuatro.saque(5);

	ContaUm.saque(5);
	ContaUm.transferePara(ContaQuatro, 50);
	
	
	std::cout << "A conta tem o saldo de R$" << ContaUm.getSaldo() << std::endl;
	std::cout << "O numero de contas e criadas e:" << conta::getnumeroDeContas() << std::endl;

	Caixa Caixa (Cpf("123.456.789-10"), "Fernando Pereira", 30000);
	std::cout << "O Gerente do banco se chama: " << Caixa.getNome() << std::endl;

	return 0;
}