#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string Nome, float Salario, std::string Senha) 
	: Funcionario(cpf, Nome, Salario), Autenticacao(Senha)
{
}

float Gerente::bonificacao() const
{
	return GetSalario() * 0.5;
}