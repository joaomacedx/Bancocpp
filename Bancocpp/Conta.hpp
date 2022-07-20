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

protected:
	float Saldo;

public:
	conta(std::string Numero, Titular titular);
	virtual ~conta();
	virtual void saque(float ValorASacar);
	void depositar(float ValorADepositar);
	float getSaldo() const;
	std::string getNumeroConta();
}; 