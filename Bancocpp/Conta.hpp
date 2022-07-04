#pragma once
#include <string>


class conta
{
private:
	static int numeroDeContas;
public:
	static int getnumeroDeContas();
private:
	std::string NumeroConta;
	std::string CpfTitular;
	std::string NomeTitular;
	float Saldo;

public:
	void saque(float ValorASacar);
	void depositar(float ValorADepositar);
	float getSaldo() const;
	conta(std::string Numero, std::string Nome, std::string Cpf);
	~conta();

	std::string getNomeTitular();

	std::string getCpfTitular();

	std::string getNumeroConta();

private:
	void CheckTamanhoDoNome();
};