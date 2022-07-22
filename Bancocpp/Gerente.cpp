#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string Nome, float Salario) : Funcionario(cpf, Nome, Salario)
{
}

float Gerente::bonificacao() const
{
	return GetSalario() * 0.5;
}