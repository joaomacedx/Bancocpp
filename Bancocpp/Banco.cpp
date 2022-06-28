#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	conta Contaum;
	conta Contadois;
	
	Contaum.setNomeTitular("fernando");
	Contaum.setCpfTitular("077.654.333-00");
	Contaum.saque(5);
	Contaum.depositar( 200);
	
	std::cout << "O CPF de " << Contaum.getNomeTitular() << " e: " << Contaum.getCpfTitular() << std::endl;
	std::cout << "A conta tem o saldo de R$" << Contaum.getSaldo() << std::endl;

	return 0;
}