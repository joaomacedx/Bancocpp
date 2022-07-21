#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaCorrente.hpp"

using namespace std;

int main()
{
	Titular titularUm(Cpf("767.876.999-00"), "Fernando");
	ContaCorrente Contaum("12345-0",titularUm);
	Titular titularDois(Cpf("777.886.865-01"), "Mauricio");
	ContaCorrente Contadois("12365-1",titularDois);
	Titular titularTres(Cpf("788.000.897-02"), "Fernanda");
	ContaCorrente Contatres("12365-1",titularTres);
	Titular titularQuatro(Cpf("88.666.55-3"), "Patricia");
	ContaPoupanca Conta4("56789-0", titularQuatro);
	Contaum.depositar( 200);

	Conta4.depositar(200);
	Conta4.saque(5);

	Contaum.saque(5);
	
	std::cout << "A conta tem o saldo de R$" << Contaum.getSaldo() << std::endl;
	std::cout << "O numero de contas e criadas e:" << conta::getnumeroDeContas() << std::endl;

	Funcionario funcionario(Cpf("123.456.789-10"), "Joao Macedo", 30000);
	std::cout << "O Gerente do banco se chama: " << funcionario.getNome() << std::endl;

	return 0;
}