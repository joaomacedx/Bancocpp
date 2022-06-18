#include <iostream>
#include <string>

using namespace std;

struct conta
{
	string NumeroConta;
	string CpfTitular;
	string NomeTitular;
	float Saldo;

	void saque(float ValorASacar)
	{
		if (ValorASacar <= 0)
		{
			cout << "Voce nao pode sacar valores negativos!!" << endl;
			cout << "O saldo da conta de " << NomeTitular << " e de R$" << Saldo << endl;
			return;

		}
		else if (ValorASacar > Saldo)
		{

			cout << "Voce nao pode sacar valores maiores do que o seu saldo!!!" << endl;
			cout << "O saldo da conta de " << NomeTitular << " e de R$" << Saldo << endl;
			return;
		}
		else
		{
			Saldo -= ValorASacar;
			cout << "O saldo da conta de " << NomeTitular << " e de R$" << Saldo << endl;

		}
	}


	void depositar(float ValorADepositar)
	{
		if (ValorADepositar <= 0)
		{
			cout << "Voce nao pode depositar valores negativos!!" << endl;
		}
		else
		{
			Saldo += ValorADepositar;
			cout << "O Saldo da conta de " << NomeTitular << " e de R$" << Saldo << endl;
		}
	}
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
	Contaum.saque(5);
	Contaum.depositar( 200);

	return 0;
}