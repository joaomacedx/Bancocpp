#include "Funcionario.hpp"
#include"Pessoa.hpp"
#include <string>

Funcionario::Funcionario(Cpf cpf, std::string Nome, float Salario) : Pessoa(cpf,Nome), Salario(Salario)
{

}
std::string Funcionario:: getNome() const 
{
	return Nome;
}

float Funcionario::GetSalario() const
{
	return Salario;
}
 