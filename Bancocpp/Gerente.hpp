#pragma once
#include "Autenticacao.hpp"
#include "Funcionario.hpp"
class Gerente final : public Funcionario, public Autenticacao
{

public:
	Gerente(Cpf cpf, std::string Nome, float Salario, std::string Senha);
	float bonificacao() const;
};

