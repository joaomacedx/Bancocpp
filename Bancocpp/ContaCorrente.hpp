#pragma once
#include "Conta.hpp"

class ContaCorrente final : public conta
{
public:
	ContaCorrente(std::string Numero, Titular titular);
	float taxaDeSaque() const override;
	void transferePara(conta& conta, float valor);
};


