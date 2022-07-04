#pragma once
#include <string>
#include "Titular.hpp"


class conta
{
private:
	static int numeroDeContas;
public:
	static int getnumeroDeContas();
private:
	std::string NumeroConta;
	Titular titular;
	float Saldo;

public:
	conta(std::string Numero, Titular titular);
	~conta();
	void saque(float ValorASacar);
	void depositar(float ValorADepositar);
	float getSaldo() const;
	std::string getNumeroConta();
};