#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string Nome, float Salario): Funcionario (cpf, Nome, Salario)
{
}

float Caixa::bonificacao() const
{
	return GetSalario() * 0.1; 
}