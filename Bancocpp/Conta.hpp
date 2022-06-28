#pragma once
#include <string>


class conta
{
 private:
	std::string NumeroConta;
	std::string CpfTitular;
	std::string NomeTitular;
	float Saldo = 0;

 public:
	void saque(float ValorASacar);
	void depositar(float ValorADepositar);
	float getSaldo();

	void setNomeTitular(std::string nome);
	std::string getNomeTitular();

	void setCpfTitular(std::string Cpf);
	std::string getCpfTitular();

	void setNumeroConta(std::string Numero);
	std::string getNumeroConta();
	  
};