#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

int main()
{
	Titular titularUm("767.876.999-00", "Fernando");
	conta Contaum("12345-0",titularUm);
	Titular titularDois("777.886.865-01", "Mauricio");
	conta Contadois("12365-1",titularDois);
	Titular titularTres("788.000.897-02", "Fernanda");
	conta Contatres("12365-1",titularTres);

	Contaum.saque(5);
	Contaum.depositar( 200);
	
	std::cout << "O CPF de " << titularUm.getNome() << " e: " << titularUm.getCpf() << std::endl;
	std::cout << "A conta tem o saldo de R$" << Contaum.getSaldo() << std::endl;
	std::cout << "O numero de contas e criadas e:" << conta::getnumeroDeContas() << std::endl;

	return 0;
}