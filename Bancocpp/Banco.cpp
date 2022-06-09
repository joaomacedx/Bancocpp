#include <iostream>
#include <string>

using namespace std;

struct conta
{
	string NumeroConta;
	string CpfTitular;
	string NomeTitular;
	float Saldo;
};

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
	return 0;
}