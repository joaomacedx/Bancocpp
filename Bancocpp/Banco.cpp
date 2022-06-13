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

void saque(conta& Conta, float ValorASacar)
{
	if (ValorASacar <= 0)
	{
		cout << "Voce nao pode sacar valores negativos!!" << endl;
		cout << "Seu saldo é de R$" << Conta.Saldo << endl;
		return;
		
	}
	else if (ValorASacar > Conta.Saldo)
	{
		
		cout << "Voce nao pode sacar valores maiores do que o seu saldo!!!" << endl;
		cout << "Seu saldo é de R$" << Conta.Saldo << endl;
		return;
	}
	else
	{
		Conta.Saldo -= ValorASacar;
		cout << "Seu saldo  agora e de R$" << Conta.Saldo << endl;

 	}
}
void depositar(conta& Conta, float ValorADepositar) 
{
    if (ValorADepositar<=0) 
	{
		cout << "Voce nao pode depositar valores negativos!!" << endl;
	}
	else
	{
		Conta.Saldo += ValorADepositar;
		cout << "O Saldo da conta de " << Conta.NomeTitular << " e de R$" << Conta.Saldo << endl; 
	}
}

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
	 saque(Contaum,5);
	 depositar(Contaum, 200);

	return 0;
}