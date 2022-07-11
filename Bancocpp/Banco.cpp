#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

using namespace std;

int main()
{
	Titular titularUm(Cpf("767.876.999-00"), "Fernando");
	conta Contaum("12345-0",titularUm);
	Titular titularDois(Cpf("777.886.865-01"), "Mauricio");
	conta Contadois("12365-1",titularDois);
	Titular titularTres(Cpf("788.000.897-02"), "Fernanda");
	conta Contatres("12365-1",titularTres);

	Contaum.saque(5);
	Contaum.depositar( 200);
	
	std::cout << "A conta tem o saldo de R$" << Contaum.getSaldo() << std::endl;
	std::cout << "O numero de contas e criadas e:" << conta::getnumeroDeContas() << std::endl;

	Funcionario funcionario(Cpf("123.456.789-10"), "Joao Macedo", 30000);
	std::cout << "O Gerente do banco se chama: " << funcionario.getNome() << std::endl;

	return 0;
}