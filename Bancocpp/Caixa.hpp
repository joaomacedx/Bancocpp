#pragma once
#include "Funcionario.hpp"
class Caixa final: public Funcionario
{
public:
	Caixa(Cpf cpf, std::string Nome, float Salario);
	float bonificacao() const;
};

