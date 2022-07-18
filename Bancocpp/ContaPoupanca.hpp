#pragma once
#include "Conta.hpp"
#include <string>
class ContaPoupanca : public conta
{
public:
	ContaPoupanca(std::string Numero, Titular titular);
	void saque(float ValorASacar);
};

