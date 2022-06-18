#include "Conta.hpp"
#include <iostream>

void conta::saque(float ValorASacar)
{
	if (ValorASacar <= 0)
	{
		std::cout << "Voce nao pode sacar valores negativos!!" << std::endl;
		std::cout << "O saldo da conta de " << NomeTitular << " e de R$" << Saldo << std::endl;
		return;

	}
	else if (ValorASacar > Saldo)
	{

		std::cout << "Voce nao pode sacar valores maiores do que o seu saldo!!!" << std::endl;
		std::cout << "O saldo da conta de " << NomeTitular << " e de R$" << Saldo << std::endl;
		return;
	}
	else
	{
		Saldo -= ValorASacar;
		std::cout << "O saldo da conta de " << NomeTitular << " e de R$" << Saldo << std::endl;

	}
}
void conta::depositar(float ValorADepositar)
{
	if (ValorADepositar <= 0)
	{
		std::cout << "Voce nao pode depositar valores negativos!!" << std::endl;
	}
	else
	{
		Saldo += ValorADepositar;
		std::cout << "O Saldo da conta de " << NomeTitular << " e de R$" << Saldo << std::endl;
	}

}