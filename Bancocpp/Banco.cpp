#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	conta Contaum;
	Contaum.NumeroConta = "123456-8";
	Contaum.CpfTitular = "555.888.999-76";
	Contaum.NomeTitular = "Fernando Paradela";
	Contaum.Saldo = 150;

	cout << "A conta de " << Contaum.NomeTitular << " tem R$" << Contaum.Saldo << endl;

	conta Contadois;
	Contadois.NumeroConta = "874563-9";
	Contadois.CpfTitular = " 888.777.666.96";
	Contadois.NomeTitular = "Henrique Pereira";
	Contadois.Saldo = 100;

	cout << "A conta de " << Contadois.NomeTitular << " tem R$" << Contadois.Saldo << endl;
	Contaum.saque(5);
	Contaum.depositar( 200);

	return 0;
}