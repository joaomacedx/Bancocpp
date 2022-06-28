#include "Conta.hpp"
#include <iostream>



conta::conta(std::string Numero, std::string Nome, std::string Cpf)
{
	this -> NumeroConta = Numero;
	this -> NomeTitular = Nome;
	this -> CpfTitular = Cpf;
	this -> Saldo = 0;

}
void conta::saque(float ValorASacar)
{
	if (ValorASacar <= 0)
	{
		std::cout << "Voce nao pode sacar valores negativos!!" << std::endl;
		std::cout << "O saldo da conta de " << getNomeTitular() << " e de R$" << getSaldo() << std::endl;
		return;

	}
	else if (ValorASacar > Saldo)
	{

		std::cout << "Voce nao pode sacar valores maiores do que o seu saldo!!!" << std::endl;
		return;
	}
	else
	{
		Saldo -= ValorASacar;
		std::cout << "O saldo da conta de " << getNomeTitular() << " e de R$" << getSaldo() << std::endl;

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
		std::cout << "O Saldo da conta de " << getNomeTitular() << " e de R$" << getSaldo() << std::endl;
	}

}
float conta::getSaldo()
{
	return Saldo;
}


void conta::setNomeTitular(std::string nome)
{
	NomeTitular = nome;
}
std::string conta::getNomeTitular()
{
	return NomeTitular;
}

void conta::setCpfTitular(std::string Cpf)
{
	CpfTitular = Cpf;
}
std::string conta::getCpfTitular()
{
	return CpfTitular;
}
void conta::setNumeroConta(std::string Numero)
{
	NumeroConta = Numero;
}
std::string conta::getNumeroConta()
{
	return NumeroConta;
}