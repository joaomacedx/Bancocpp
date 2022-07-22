#pragma once
#include "Funcionario.hpp"
class Gerente final : public Funcionario
{
public:
	Gerente(Cpf cpf, std::string Nome, float Salario);
	float bonificacao() const;
};

