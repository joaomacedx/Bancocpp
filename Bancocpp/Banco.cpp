#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	conta Contaum("12345-0", "Fernando", "767.876.999-00");
	conta Contadois("12365-1", "Mauricio", "777.886.865-01");

	Contaum.saque(5);
	Contaum.depositar( 200);
	
	std::cout << "O CPF de " << Contaum.getNomeTitular() << " e: " << Contaum.getCpfTitular() << std::endl;
	std::cout << "A conta tem o saldo de R$" << Contaum.getSaldo() << std::endl;
	std::cout << "O numero de contas e criadas e:" << conta::getnumeroDeContas() << std::endl;

	return 0;
}