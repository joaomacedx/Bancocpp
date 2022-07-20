#include "Conta.hpp"
#include <iostream>

int conta::numeroDeContas = 0;
int conta::getnumeroDeContas()
{
	return numeroDeContas;
}
conta::conta(std::string Numero, Titular titular)
	:NumeroConta(Numero),
	titular(titular),
	Saldo(0)
{
	numeroDeContas++;
}
conta::~conta()
{
	numeroDeContas--;
}
float conta::taxaDeSaque() const
{
	return 0.5;
}
void conta::saque(float ValorASacar)
{
	if (ValorASacar <= 0)
	{
		std::cout << "Voce nao pode sacar valores negativos!!" << std::endl;
		std::cout << "O saldo e de R$" << getSaldo() << std::endl;
		return;

	}
	float tarifaDeSaque = ValorASacar * taxaDeSaque();
	float valorDoSaque = ValorASacar + tarifaDeSaque;
	if (valorDoSaque > Saldo)
	{

		std::cout << "Voce nao pode sacar valores maiores do que o seu saldo!!!" << std::endl;
		return;
	}
	else
	{
		Saldo -= valorDoSaque;
		std::cout << "O saldo e de R$" << getSaldo() << std::endl;

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
		std::cout << "O Saldo e de R$" << getSaldo() << std::endl;
	}

}
float conta::getSaldo() const
{
	return Saldo;
}


std::string conta::getNumeroConta()
{
	return NumeroConta;
}

