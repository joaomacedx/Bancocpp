#pragma once
#include <string>


class conta
{
 private:
	std::string NumeroConta;
	std::string CpfTitular;
	std::string NomeTitular;
	float Saldo;

 public:
	void saque(float ValorASacar);
	void depositar(float ValorADepositar);
	float getSaldo();
	conta(std::string Numero, std::string Nome, std::string Cpf);

	std::string getNomeTitular();

	std::string getCpfTitular();

	std::string getNumeroConta();
	  
};