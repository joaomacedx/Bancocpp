#pragma once
#include <string>

struct conta
{
	string NumeroConta;
	string CpfTitular;
	string NomeTitular;
	float Saldo;

	void saque(float ValorASacar);
	void depositar(float ValorADepositar);
};