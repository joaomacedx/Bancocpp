#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string Numero, Titular titular) : conta(Numero, titular)
{

}
void ContaPoupanca::saque(float ValorASacar)
{
	if (ValorASacar <= 0)
	{
		std::cout << "Voce nao pode sacar valores negativos!!" << std::endl;
		std::cout << "O saldo da conta de  e de R$" << getSaldo() << std::endl;
		return;

	}
	float tarifaDeSaque = ValorASacar * 0.09;
	float valorDoSaque = ValorASacar + tarifaDeSaque;
	if (valorDoSaque > Saldo)
	{

		std::cout << "Voce nao pode sacar valores maiores do que o seu saldo!!!" << std::endl;
		return;
	}
	else
	{
		Saldo -= valorDoSaque;
		std::cout << "O saldo da conta de e de R$" << getSaldo() << std::endl;

	}
}